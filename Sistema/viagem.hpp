#ifndef VIAGEM_HPP
#define VIAGEM_HPP

#include "rota.hpp"
#include "ticket.hpp"
#include "user.hpp"

class viagem {

private:

int assentos
rota* rota;

public:

void setAssento(int _assentos);
void setRota(rota* _rota);
void comprarAssento();


}

#endif