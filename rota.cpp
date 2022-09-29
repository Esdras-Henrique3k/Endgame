#include <iostream>
#include "rota.hpp"

rota::rota(string _origem, string _destino,int _horario, double _preco, int _paradas, string _tipo, int assentos, motorista _responsavel): origem(_origem), destino(_destino), horario(_horario), preco(_preco), paradas(_paradas), tipo(_tipo), assentos(_assentos);

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

std::string rota::getTipo(){
  return tipo;
}

int rota::getAssentos(){
  return assentos;
}

motorista* rota::getMotorista(){
  return->*motorista;
}

std::string rota::comprar(passageiro comprador){
  if(assentos!=0){
    passageiros.push_back(comprador);
    assentos--;
  }else{
    std::cout<<"PASSAGENS ESGOTADAS."<<endl;
  }
}
