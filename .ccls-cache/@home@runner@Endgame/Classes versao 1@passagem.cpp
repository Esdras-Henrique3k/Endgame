#include "passagem.hpp"

  Passagem::Passagem(Rota _rota,Pessoa _passageiro): rota(_rota),passageiro(_passageiro){}

  void Passagem::imprimirPassagem(){
    std::cout<< "----- PASSAGEM -----"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Passageiro(a): " << passageiro.getNome();
    std::cout<< "Rota: " << rota.descricaoRota();
  }
