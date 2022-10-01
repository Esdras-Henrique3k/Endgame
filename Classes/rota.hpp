#ifndef ROTA_HPP
#define ROTA_HPP
  
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class rota{
   
string origem;
string destino;
int horario;
double preco;
int paradas;
int assentos;
string tipo;

    
public:
   
rota();
string getOrigem();
string getDestino();
int getHorario();
double getPreco();
int getParadas();
int getAssentos();
string getTipo();

};

#endif

 
