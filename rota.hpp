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
  string tipo;
  int assentos;
  motorista responsavel;
  vector<*passageiro> passageiros;
    
  public:
   
rota(string _origem, string _destino,int _horario, double _preco, int _paradas, string _tipo, int assentos, motorista _responsavel);

string getOrigem();
string getDestino();
int getHorario();
double getPreco();
int getParadas();
string getTipo();
int getAssentos();
string comprar();

};

#endif

 
