#include <iostream>
#include "Recursos.h"
#include <fstream>
#include <sstream> 
#include <string>
#include <cstdlib>
using namespace std;
void escribirArchi(Recursos rec);
float error(Recursos rec);

int main (int argc,char* argv[]){
	Recursos rec;
	int ancho=atoi(argv[1]);
	int bps=atoi(argv[2]);
	
	
	rec.iniciarRecursos(bps,ancho,'b');
	escribirArchi(rec);
	if(rec.armonicos.size()>5)
		cout<<"es confiable la transmision "<<endl;
	else{
		cout<<"no es confiable la transmision "<<endl;
	}
	float E=error(rec);
	cout<<E<<endl;
	cout<<rec.armonicos.size();
	rec.vaciarTodo();
	
	
	
return 0;
}
void escribirArchi(Recursos rec){
stringstream ss;	
int tam=rec.sumatoriaG.size();	
	fstream r1("./graph/puntos.txt",std::ios::out);
	if(r1.is_open()){
	int r=0;
	for(float i=0;i<8;i+=0.001){
		ss<<i<<"\n"<<rec.sumatoriaG[r]<<"\n";
		r1<<ss.str();
		ss.str("");
		
		r++;
			
	}
	r1.close();
	}else{
		std::cout<<" no se encontro el archivo ";
	}
	
}

float error(Recursos rec){
	float E=0;
	int r=0;
	for(float i=0;i<8;i+=0.001){
		E+=fabs(rec.numero[7-(int)i]-rec.sumatoriaG[r])*0.001;
		r++;
	}
	return E/8;
}

