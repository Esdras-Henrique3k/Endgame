#include <iostream>
#include "rota.hpp"

rota::rota(string _origem, string _destino,int _horario, int _paradas, int _tickets, string _tipo): origem(_origem), destino(_destino), horario(_horario), preco(_preco), paradas(_paradas), tickets(_tickets), tipo(_tipo);

std::string rota::getOrigem(){
  return origem; 
}

std::string rota::getDestino(){
  return destino;
}

int rota::getHorario(){
  return horario;
}

int rota::getParadas(){
  return paradas;
}

int rota::getTickets(){
  return tickets;
}

std::string rota::getTipo(){
  return tipo;
}

std::string rota::descricaoRota(){
  std::string str;
  str = "Origem: "+ origem +'\n'+"Destino: "+ destino + '\n' + "Parte às " + std::to_string(horario)+ '\n' +
"Quantidade de paradas: " + std::to_string(paradas) +'\n'+ "Modelo de assento: " tipo;
  return str;
}