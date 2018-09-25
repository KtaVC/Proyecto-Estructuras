#include "NodoPasillo.h"

NodoPasillo::NodoPasillo(ListaTipoProd v, NodoPasillo *sig = NULL, NodoPasillo *ant = NULL) : valor(v), siguiente(sig), anterior(ant)
{

}

