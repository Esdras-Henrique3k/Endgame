#include "viagem.hpp"
#include "bboard.hpp"

void viagem::setRota(rota* _rota){
  rota=_rota;
  std::cout<<"Rota adicionada!"<<std::endl;
}

void viagem::setAssento(int _assento){
	assento=_assento;
	std::cout<<"Assentos adicionados!"<<std::endl;
}

void viagem::comprarAssento(){
	assento-=1;
}