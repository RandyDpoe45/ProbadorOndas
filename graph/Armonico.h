#ifndef ARMONICO_H
#define ARMONICO_H
#include <vector>
#include <math.h>

struct Armonico{
	std::vector<double> gts;
	//float M_lPI=3.141592653589793238462643383279502884;
	double an;
	double bn;
	double cn;
	double theta;
	void calcularAn(int numero[],float frec,int t);
	void calcularBn(int numero[],float frec,int t);
	void inicializar(int numero[],int t,float frec);
	void calculargts(int t,float frec);	
};
#endif
