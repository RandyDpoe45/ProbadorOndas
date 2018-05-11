#ifndef NODO_H
#define NODO_H
template<class T>
struct Nodo{
	T dato;
	Nodo<T>* siguiente;	
	Nodo<T>* anterior;
};
#endif
