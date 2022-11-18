#ifndef TICKET_HPP
#define TICKET_HPP
#include "rota.hpp"
#include "user.hpp"
class ticket{
  private:
	rota rota;
    float preco;
    user buyer;
  public: 
	  ticket(rota _rota, float _preco, user _buyer);
      void imprimir();
};

  #endif