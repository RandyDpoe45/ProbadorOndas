#ifndef RECURSOS_H
#define RECURSOS_H
#include "Armonico.h"
#include <vector>
struct Recursos{
std::vector<double> sumatoriaG;
std::vector<Armonico*> armonicos;
int numeroArmonicos;
float frecuencia;
float dc;
int anchoBanda;
int bps;
int numero[8];
void iniciarRecursos(int bps,int anchoBand,int caracter);
int convBin(int caracter);
void llenarArmonicos();
void calcularSumatoria();
void vaciarTodo();
};
#endif
 
