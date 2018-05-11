#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <typeinfo>
#include <iostream>
template<class T>
struct Lista{
	Nodo<T>* cabeza;
	Nodo<T>* cola;
	int longitud;
	void ListaVacia();
	bool esVacia();
	void crearNodo();
	void insertar(T dato);
	T buscar(int numFicha);
	Nodo<T>* buscarNodo(int numeroD);
	void eliminarDato(int numeroD);
	Nodo<T>* returncabeza();
	Nodo<T>* returncola();
	void limpiarLista();
	int conteo();
	void imprimir();
};
#include "Lista.hpp"
#endif
