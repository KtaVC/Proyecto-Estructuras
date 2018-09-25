#include "Interfaz.h"

Interfaz::Interfaz()
{

}

void Interfaz::leerArchivo()
{
    string contenido;
    contenido += "productos.txt";
    ifstream fs(contenido.c_str(), ios:: in );
    char linea[128];
    long contador = 0L;
    if (fs.fail())
      cerr << "El fichero no existe" << endl;
    else
      while (!fs.eof()) {
        fs.getline(linea, sizeof(linea));
        cout << linea << endl;
        if ((++contador % 24) == 0) {
          cout << "continuar...";
          cin.get();
        }
      }
    fs.close();
}

void Interfaz::menu()
{
    bool i=false;
    system("color 30");
    Cliente cliente;
    int opc, o;
    string compra, marca, nombre;
    Productos producto;
    pilaProductos pilaP;
    pilaCarrito carro;
    colaClientes cola;
    int id=1111;
    menu:
    cout<<"\t\t .:Supermercado:."<<endl;
    cout<<"\n\nSeleccione una opcion segun lo que desea realizar"<<endl;
    cout<<"\n1. Ver productos \n2. Agregar producto a carrito\n3. Ir a cajas \n4. Salir"<<endl;
    cin>>opc;
    if(opc < 1 || opc > 4){
        cout<<"Ingrese una opcion valida"<<endl;
        system("pause");
        system("cls");
        goto menu;
    }
    system("cls");

    switch(opc){
        case 1:{
            leerArchivo();
            system("pause");
            system("cls");
            goto menu;
        }
        case 2:{
            insertarDatos();
            system("pause");
            system("cls");
            cout<<"*Cual es su nombre"<<endl;
            cin>>nombre;
            submenu:
            cout<<"\n*Que producto desea comprar"<<endl;
            cin>>compra;
            cout<<"\n*Que marca desea"<<endl;
            cin>>marca;
            string contenido2;
            contenido2 += "factura.txt";
            ofstream fs(contenido2.c_str());
            fs << "Factura de compra" << endl;
            fs << compra << endl;
            fs << marca << endl;
            fs.close();
            producto.setNomProd(compra);
            producto.setMarca(marca);
            producto.setIdProd(id);
           // pilaP.Desapilar(producto);
            carro.Apilar(producto);
            system("pause");
            system("cls");
            cout<<"\nDesea comprar otro producto?\n\n1) SI\n2) NO"<<endl;
            cin>>o;
            if(o==1){
                id++;
                system("cls");
                goto submenu;
            }else{
                system("pause");
                system("cls");
                i=true;
                goto menu;
            }
        }
        case 3:{
            if(i==true){
                cliente.setNombre(nombre);
                cola.Encolar(cliente);
                cout<<"\t\t*Factura*\n"<<endl;
                time_t o;
                o = time(NULL);
                printf("%s", asctime(localtime(&o)));
                //cout<<"\nCliente: ";
                //cola.MostrarCola();
                cout<<"\nProductos comprados: \n"<<endl;
                carro.MostrarPila();
                cout<<"\nCompra realizada con exito"<<endl;
                cout<<"\n\nGracias por su compra"<<endl;
                carro.DestruirPila();
                system("pause");
                system("cls");
            }else{
                cout<<"\t\t .:Supermercado:.\n"<<endl;
                cout<<"No puedes ir a cajas sin tener productos a pagar"<<endl;
                system("pause");
                system("cls");
                goto menu;
            }
            goto menu;
        }
        case 4:{
            cout<<"\t\t .:Supermercado:.\n"<<endl;
            cout<<"GRACIAS POR VISITARNOS...!"<<endl;
            system("pause");
            break;
        }
    }
}

void Interfaz::insertarDatos(){
    Productos arroz,frijoles,azucar,sal,jabonPolvo,jabonBano,desinfectantes,higienico,toallas, panales, desodorantes, shampoo;
    pilaProductos a1, a2, a3, a4, l1, l2, l3, l4, ap1, ap2, ap3, ap4;
    ListaProducto la1, la2, la3, la4, ll1, ll2, ll3, ll4, lap1, lap2, lap3, lap4;
    ListaTipoProd abarrotes1,abarrotes2,abarrotes3,abarrotes4,limpieza1,limpieza2,limpieza3,limpieza4,artPersonales1,artPersonales2,artPersonales3,artPersonales4;
    ListaPasillos abarrotes,limpieza,artPersonales;
    //Se crean productos
    arroz.setNomProd("Arroz");
    arroz.setMarca("Sabanero");
    arroz.setIdProd(1111);
    frijoles.setNomProd("Frijoles");
    frijoles.setMarca("Tio Pelon");
    frijoles.setIdProd(1112);
    azucar.setNomProd("Azucar");
    azucar.setMarca("Dona Maria");
    azucar.setIdProd(1113);
    sal.setNomProd("Sal");
    sal.setMarca("Suli");
    sal.setIdProd(1114);

    jabonPolvo.setNomProd("Jabon en polvo");
    jabonPolvo.setMarca("Irex");
    jabonPolvo.setIdProd(2221);
    jabonBano.setNomProd("Jabon de bano");
    jabonBano.setMarca("Dove");
    jabonBano.setIdProd(2222);
    desinfectantes.setNomProd("Desinfectantes");
    desinfectantes.setMarca("Fabuloso");
    desinfectantes.setIdProd(2223);
    higienico.setNomProd("Higienico");
    higienico.setMarca("Scott");
    higienico.setIdProd(2224);

    toallas.setNomProd("Toallas");
    toallas.setMarca("Saba");
    toallas.setIdProd(3331);
    panales.setNomProd("Panales");
    panales.setMarca("Huggies");
    panales.setIdProd(3332);
    desodorantes.setNomProd("Desodorantes");
    desodorantes.setMarca("Rexona");
    desodorantes.setIdProd(3333);
    shampoo.setNomProd("Shampoo");
    shampoo.setMarca("Pantene");
    shampoo.setIdProd(3334);

    //Se ingresan productos a la pila
    a1.Apilar(arroz); a1.Apilar(arroz); a1.Apilar(arroz); a1.Apilar(arroz);
    a2.Apilar(frijoles); a2.Apilar(frijoles); a2.Apilar(frijoles); a2.Apilar(frijoles);
    a3.Apilar(azucar); a3.Apilar(azucar); a3.Apilar(azucar); a3.Apilar(azucar);
    a4.Apilar(sal); a4.Apilar(sal); a4.Apilar(sal); a4.Apilar(sal);

    l1.Apilar(jabonPolvo); l1.Apilar(jabonPolvo); l1.Apilar(jabonPolvo); l1.Apilar(jabonPolvo);
    l2.Apilar(jabonBano); l2.Apilar(jabonBano); l2.Apilar(jabonBano); l2.Apilar(jabonBano);
    l3.Apilar(desinfectantes); l3.Apilar(desinfectantes); l3.Apilar(desinfectantes); l3.Apilar(desinfectantes);
    l4.Apilar(higienico); l4.Apilar(higienico); l4.Apilar(higienico); l4.Apilar(higienico);

    ap1.Apilar(toallas); ap1.Apilar(toallas); ap1.Apilar(toallas); ap1.Apilar(toallas);
    ap2.Apilar(panales); ap2.Apilar(panales); ap2.Apilar(panales); ap2.Apilar(panales);
    ap3.Apilar(desodorantes); ap3.Apilar(desodorantes); ap3.Apilar(desodorantes); ap3.Apilar(desodorantes);
    ap4.Apilar(shampoo); ap4.Apilar(shampoo); ap4.Apilar(shampoo); ap4.Apilar(shampoo);

    //Se le inserta las pilas a la lista productos(SIMPLE)
    la1.anadir(a1);
    la2.anadir(a2);
    la3.anadir(a3);
    la4.anadir(a4);

    ll1.anadir(l1);
    ll2.anadir(l2);
    ll3.anadir(l3);
    ll4.anadir(l4);

    lap1.anadir(ap1);
    lap2.anadir(ap2);
    lap3.anadir(ap3);
    lap4.anadir(ap4);

    //Se le inserta la lista simple a la lista tipo productos(doble circular)
    abarrotes1.insertarNodo(la1);
    abarrotes2.insertarNodo(la2);
    abarrotes3.insertarNodo(la3);
    abarrotes4.insertarNodo(la4);

    limpieza1.insertarNodo(ll1);
    limpieza2.insertarNodo(ll2);
    limpieza3.insertarNodo(ll3);
    limpieza4.insertarNodo(ll4);

    artPersonales1.insertarNodo(lap1);
    artPersonales2.insertarNodo(lap2);
    artPersonales3.insertarNodo(lap3);
    artPersonales4.insertarNodo(lap4);

    //Se le inserta la lista circular doble a la lista pasillo(DOBLE ENLAZADA)
    abarrotes.Insertar(abarrotes1); abarrotes.Insertar(abarrotes2); abarrotes.Insertar(abarrotes3); abarrotes.Insertar(abarrotes4);
    limpieza.Insertar(limpieza1); limpieza.Insertar(limpieza2); limpieza.Insertar(limpieza3); limpieza.Insertar(limpieza4);
    artPersonales.Insertar(artPersonales1); artPersonales.Insertar(artPersonales2); artPersonales.Insertar(artPersonales3); artPersonales.Insertar(artPersonales4);

    //MOSTRAR
    artPersonales.Mostrar();
}

Interfaz::~Interfaz()
{
    //dtor
}
