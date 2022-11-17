#ifndef TICKET_HPP
#define TICKET_HPP
#include "rota.hpp"
#include "user.hpp"
class ticket{
  private:
    float preco;
    user buyer;
  public: 
      void imprimir(rota _y);
};

  #endif