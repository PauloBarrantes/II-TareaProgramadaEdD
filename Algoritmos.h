#ifndef algoritmos_2017
#define algoritmos_2017

#include "DiccionarioLSE.h"
#include "CPArbol.h"
#include "Relaciones1_1.h"
#include "GNDMatriz.h"
//#include "GNDLista.h"
struct tripleta
{
	Vertice v1;
	Vertice v2;
	int peso;
	par(Grafo::Vertice v1, Grafo::Vertice v2){
		this->v1 = v1;
		this->v2 = v2;
	}

}

class Algoritmos{

	private:
		Grafo* grafo1;
		Grafo* grafo2;


		int costoActual;
		int costoGlobal;
		int numVertice;

		Grafo::Vertice * solucionActual;
		Grafo::Vertice * solucionGanadora;
		DiccionarioLSE<Grafo::Vertice> diccionarioH;

	public:
		Algoritmos();
		~Algoritmos();
		int iguales(Grafo*, Grafo*);
		Grafo*  copiar(Grafo*,Grafo*);
		void floyd(Grafo*);
		void kruskal(Grafo*);
		void prim (Grafo*);
		void dijkstra(Grafo*, Grafo::Vertice);
		void problemaDelVendedor(Grafo*);
		void problemaDelVendedorR(Grafo*, Grafo::Vertice,int);

};

#endif
