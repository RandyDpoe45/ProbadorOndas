#include"Armonico.h"
#include <iostream>
#include <math.h>
void Armonico::inicializar(int numero[],int t,float frec){	 	
		
	calcularAn(numero,frec,t);
	calcularBn(numero,frec,t);
	cn=sqrt((an*an)+(bn*bn));
	theta=atan2(bn,an);
	calculargts(t,frec);
	
}
void Armonico::calcularAn(int numero[],float frec,int t){
double val=0;	
	for(int i=0;i<8;i++){
		if(numero[i]==1){
			val+=(cos(M_PI*(i+1)*t*frec)-cos(M_PI*i*t*frec));
		}	
	}
	val*=(1/(M_PI*t));
	an=val;
	
}
void Armonico::calcularBn(int numero[],float frec,int t){
double val=0;
	for(int i=0;i<8;i++){
		if(numero[i]==1){
			val+=(sin(M_PI*(i+1)*t*frec)-sin(M_PI*(i)*t*frec));		
		}	
	}
	val*=(1/(M_PI*t));
	bn=val;
}
void Armonico::calculargts(int t,float frec){
float val=0,gr=M_PI*t*frec,b; 	

	for(float i=0;i<8;i+=0.001){
		b=(gr*i)+theta;
		val=sin(b);
		val*=cn;
		gts.push_back(val);		
	}
}

