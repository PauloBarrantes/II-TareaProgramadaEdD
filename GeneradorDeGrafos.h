#ifndef GeneradorGrafos_2017
#define GeneradorGrafos_2017
#include <iostream>
//#include "GNDLista.h"
#include "GNDMatriz.h"
using namespace std;
class GeneradorGrafos {

    public:
        GeneradorGrafos();
        ~GeneradorGrafos();

        Grafo* grafoCompleto(int n);
        Grafo* grafoCasiCompleto(int n);
        Grafo* grafoMuyIncompleto(int n);

};

#endif
