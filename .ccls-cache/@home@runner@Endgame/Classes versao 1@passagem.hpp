#ifndef PASSAGEM_HPP
#define PASSAGEM_HPP

#include "rota.hpp
#include "pessoa.hpp"

class Passagem {
private:
  Rota rota;
  Pessoa passageiro;

public:
  Passagem(Rota _rota,Pessoa _passageiro);
  void imprimirPassagem();
};

#endif