#include "stdafx.h"
#include "Interfaz.h"


Interfaz::Interfaz()
{

}

void Interfaz::leerArchivo()
{
	string contenido;
	contenido += "productos.txt";
	ifstream fs(contenido.c_str(), ios::in);
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
	bool i = false;
	system("color 30");
	Cliente cliente;
	int opc, o;
	string compra, marca, nombre;
	Producto producto;
	PilaProducto pilaP;
	PilaCarrito carro;
	ColaCliente cola;
	int id = 1111;
menu:
	cout << "\t\t .:Bienvenidos a la Ferreteria XYZ:." << endl;
	cout << "\n\nSeleccione una opcion segun lo que desea realizar" << endl;
	cout << "\n1. Ver productos \n2. Agregar producto al carrito\n3. Pagar \n4. Salir" << endl;
	cin >> opc;
	if (opc < 1 || opc > 4) {
		cout << "Ingrese una opcion valida" << endl;
		system("pause");
		system("cls");
		goto menu;
	}
	system("cls");

	switch (opc) {
	case 1: {
		leerArchivo();
		system("pause");
		system("cls");
		goto menu;
	}
	case 2: {
		insertarDatos();
		system("pause");
		system("cls");
		cout << "*Cual es su nombre" << endl;
		cin >> nombre;
	submenu:
		cout << "\n*Que producto desea comprar" << endl;
		cin >> compra;
		cout << "\n*Que marca desea" << endl;
		cin >> marca;
		string contenido2;
		contenido2 += "factura.txt";
		ofstream fs(contenido2.c_str());
		fs << "Factura de compra" << endl;
		fs << compra << endl;
		fs << marca << endl;
		fs.close();
		producto.setNombre(compra);
		producto.setMarca(marca);
		producto.setId(id);
		// pilaP.Desapilar(producto);
		carro.Apilar(producto);
		system("pause");
		system("cls");
		cout << "\nDesea comprar otro producto?\n\n1) SI\n2) NO" << endl;
		cin >> o;
		if (o == 1) {
			id++;
			system("cls");
			goto submenu;
		}
		else {
			system("pause");
			system("cls");
			i = true;
			goto menu;
		}
	}
	case 3: {
		if (i == true) {
			cliente.setNombre(nombre);
			cola.Encolar(cliente);
			cout << "\t\t*Factura*\n" << endl;
			time_t o;
			o = time(NULL);
			printf("%s", asctime(localtime(&o)));
			//cout<<"\nCliente: ";
			//cola.MostrarCola();
			cout << "\nProductos comprados: \n" << endl;
			carro.Mostrar();
			cout << "\nCompra realizada con exito" << endl;
			cout << "\n\nGracias por su compra" << endl;
			carro.Destruir();
			system("pause");
			system("cls");
		}
		else {
			cout << "\t\t .:Ferreteria XYZ:.\n" << endl;
			cout << "No puedes pagar sin tener productos en el carrito" << endl;
			system("pause");
			system("cls");
			goto menu;
		}
		goto menu;
	}
	case 4: {
		cout << "\t\t .:Ferreteria XYZ:.\n" << endl;
		cout << "GRACIAS POR SU VISITA...!" << endl;
		system("pause");
		break;
	}
	}
}

void Interfaz::insertarDatos() {
	Producto arroz, frijoles, azucar, sal, jabonPolvo, jabonBano, desinfectantes, higienico, toallas, panales, desodorantes, shampoo;
	PilaProducto a1, a2, a3, a4, l1, l2, l3, l4, ap1, ap2, ap3, ap4;
	ListaProducto la1, la2, la3, la4, ll1, ll2, ll3, ll4, lap1, lap2, lap3, lap4;
	ListaTipoProducto abarrotes1, abarrotes2, abarrotes3, abarrotes4, limpieza1, limpieza2, limpieza3, limpieza4, artPersonales1, artPersonales2, artPersonales3, artPersonales4;
	
	//Se crean productos
	arroz.setNombre("Arroz");
	arroz.setMarca("Sabanero");
	arroz.setId(1111);
	frijoles.setNombre("Frijoles");
	frijoles.setMarca("Tio Pelon");
	frijoles.setId(1112);
	azucar.setNombre("Azucar");
	azucar.setMarca("Dona Maria");
	azucar.setId(1113);
	sal.setNombre("Sal");
	sal.setMarca("Suli");
	sal.setId(1114);

	jabonPolvo.setNombre("Jabon en polvo");
	jabonPolvo.setMarca("Irex");
	jabonPolvo.setId(2221);
	jabonBano.setNombre("Jabon de bano");
	jabonBano.setMarca("Dove");
	jabonBano.setId(2222);
	desinfectantes.setNombre("Desinfectantes");
	desinfectantes.setMarca("Fabuloso");
	desinfectantes.setId(2223);
	higienico.setNombre("Higienico");
	higienico.setMarca("Scott");
	higienico.setId(2224);

	toallas.setNombre("Toallas");
	toallas.setMarca("Saba");
	toallas.setId(3331);
	panales.setNombre("Panales");
	panales.setMarca("Huggies");
	panales.setId(3332);
	desodorantes.setNombre("Desodorantes");
	desodorantes.setMarca("Rexona");
	desodorantes.setId(3333);
	shampoo.setNombre("Shampoo");
	shampoo.setMarca("Pantene");
	shampoo.setId(3334);

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
	la1.agregar(a1);
	la3.agregar(a3);
	la4.agregar(a4);

	ll1.agregar(l1);
	ll2.agregar(l2);
	ll3.agregar(l3);
	ll4.agregar(l4);

	lap1.agregar(ap1);
	lap2.agregar(ap2);
	lap3.agregar(ap3);
	lap4.agregar(ap4);

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
	//abarrotes.Insertar(abarrotes1); abarrotes.Insertar(abarrotes2); abarrotes.Insertar(abarrotes3); abarrotes.Insertar(abarrotes4);
	//limpieza.Insertar(limpieza1); limpieza.Insertar(limpieza2); limpieza.Insertar(limpieza3); limpieza.Insertar(limpieza4);
	//artPersonales.Insertar(artPersonales1); artPersonales.Insertar(artPersonales2); artPersonales.Insertar(artPersonales3); artPersonales.Insertar(artPersonales4);

	//MOSTRAR
	//artPersonales.Mostrar();
}

Interfaz::~Interfaz()
{
	//dtor
}