#ifndef ROTA_HPP
#define ROTA_HPP
  
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Rota{
   
string origem;
string destino;
int horario;
int paradas;
string tipo;
int tickets;

    
public:
   
Rota(std::string _origem, std::string _destino, int _horario, int _paradas, int _tickets, std::string _tipo);
string getOrigem();
string getDestino();
int getHorario();
int getParadas();
int getTickets();
string getTipo();
string descricaoRota();

};

#endif

 
