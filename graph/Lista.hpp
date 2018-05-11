#ifndef LISTA_HPP
#define LISTA_HPP
#include"Lista.h"
	template<class T>
	void  Lista <T>::ListaVacia(){
		cabeza=NULL;
	 	cola=NULL;
	 	longitud=0;
	}
	template<class T>
	bool Lista <T>::esVacia(){
		if(cabeza==NULL){
			return true;
		}
		else{
		return false;
		}
	}
	template<class T>
	int Lista <T>::conteo(){
		int c=0;Nodo<T>* loc=cabeza;
		while(loc!=NULL){
			loc=loc->siguiente;
			c++;
		}
		return c;
	}

	template<class T>	
	void  Lista <T>::eliminarDato(int numeroD){
		Nodo<T>* loc=cabeza;int c=0;
		while(c<numeroD){
			loc=loc->siguiente;
			c++;
		}
		if(loc==cabeza){
			cabeza=cabeza->siguiente;
			delete loc;
		}else{	
		if(loc==cola){
			loc->anterior->siguiente=NULL;
			cola=loc->anterior;
		}else{
			loc->anterior->siguiente=loc->siguiente;
			loc->siguiente->anterior=loc->anterior;	
		}
		delete loc;
		}	
		longitud--;
		
	}
	template<class T>
	Nodo<T>* Lista <T>::buscarNodo(int numeroD){
		Nodo<T>* loc=cabeza;int c=0;
		if(loc!=NULL){
		while(c<numeroD){
			if(loc!=NULL){
			loc=loc->siguiente;
			c++;
			}
		}
		}
		return loc;
	}
	template<class T>	
	void Lista <T>::insertar(T dato){
		Nodo<T>* nuevo= new Nodo<T>;
		nuevo->dato= dato;
		nuevo->siguiente=NULL;
		if(esVacia()){
		cabeza=nuevo;
		cabeza->anterior=NULL;
		cola=cabeza;
		}else{
		nuevo->anterior=cola;
		cola->siguiente=nuevo;
		cola=nuevo;
		}
		longitud++;
	}
	template<class T>	
	T Lista <T>::buscar(int numFicha){
		Nodo<T>* loc=cabeza;int c=0;
		if(loc!=NULL){
		while(c<numFicha){
			if(loc!=NULL){
			loc=loc->siguiente;
			c++;
			}
		}
		}
		
		return loc->dato;
	}

	template<class T>	
	Nodo<T>* Lista <T>::returncabeza(){
		return cabeza;
	}
	template<class T>	
	Nodo<T>* Lista <T>::returncola(){
		return cola;
	}
	template<class T>	
	void Lista <T>::limpiarLista(){
		while(!esVacia()){
			eliminarDato(0);
		}
		ListaVacia();
	}

	template<class T>	
	void Lista <T>:: imprimir(){
		Nodo<T>* loc=cabeza;
		while(loc!=NULL){
			std::cout<<loc->dato<<std::endl;
			loc=loc->siguiente;
		}
	}
#endif
