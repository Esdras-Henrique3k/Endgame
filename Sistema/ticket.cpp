#include <iostream>
#include "ticket.hpp"

ticket::ticket(rota _rota, float _preco, user _buyer): rota(_rota), preco(_preco), buyer(_buyer){}

void ticket::imprimir(){
	std::cout<<rota.descricaoRota();
}
