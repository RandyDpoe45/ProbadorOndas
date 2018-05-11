#include "Recursos.h"
#include <iostream>
void Recursos::iniciarRecursos(int bps,int anchoBand,int caracter){

	anchoBanda=anchoBand*1000;
	dc=convBin(caracter);
	dc=dc/8;
	frecuencia=0.25;
	float primAr=bps;
	primAr=primAr/8;
	numeroArmonicos=anchoBanda/primAr;	
	llenarArmonicos();
	calcularSumatoria();

}
int Recursos::convBin(int caracter){
int cont=0;	
	for(int i=7;i>=0;i--){
		if(caracter%2==1){
			cont++;		
		}
		numero[i]=caracter%2;
		caracter=caracter/2;	
	}
return cont;
}
void Recursos::llenarArmonicos(){

	for(int i=0;i<numeroArmonicos;i++){	
		armonicos.push_back(new Armonico);
		armonicos[i]->inicializar(numero,(i+1),frecuencia);		
	}
}
void Recursos::calcularSumatoria(){
	int tam=armonicos.front()->gts.size();	
	float val=0;	
	for(int i=0;i<tam;i++){
		val=0;
		for(int j=0;j<numeroArmonicos;j++){
			val+=(armonicos[j]->gts[i]);		
		}	
		sumatoriaG.push_back(val+dc);
	}	
}
void Recursos::vaciarTodo(){
int tam=armonicos.size();	
	for(int i=0;i<tam;i++){
		armonicos[i]->gts.clear();
	}
	armonicos.clear();
	sumatoriaG.clear();
	
	
}
