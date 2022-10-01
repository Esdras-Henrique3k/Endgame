#include <iostream>
#include "rota.hpp"

rota::rota(string _origem, string _destino,int _horario, double _preco, int _paradas, int _assentos, string _tipo): origem(_origem), destino(_destino), horario(_horario), preco(_preco), paradas(_paradas), assentos(_assentos), tipo(_tipo);

std::string rota::getOrigem(){
  return origem; 
}

std::string rota::getDestino(){
  return destino;
}

int rota::getHorario(){
  return horario;
}

double rota::getPreco{
  return preco;
}

int rota::getParadas(){
  return paradas;
}

int rota::getAssentos(){
  return assentos;
}

string rota::getTipo(){
  return tipo;
}