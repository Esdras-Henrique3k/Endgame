#include "client.hpp"

void client::incrementarFidelidade(){
  fidelidade++;
}

int client::getFidelidade(){
  return fidelidade;
};

void client::setIdade(int _idade){
  idade = _idade;
};

