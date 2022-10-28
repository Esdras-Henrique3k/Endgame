#include "viagem.hpp"
#include "bboard.hpp"

void viagem::setRota(){
  int id=0;
  for(auto ptr = rotas){
    std::cout << '\n' << id << '.' << '\n' << ptr->descricaoRota();
    id++;
  }
  std::cout << '\n' <<"Escolha sua rota: ";
  std::cin>>id;
  rota = rotas[id];
  
}

void viagem::comprarAssento(){
  
}