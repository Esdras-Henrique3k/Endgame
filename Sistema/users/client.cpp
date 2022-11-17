#include "client.hpp"

client::void incrementarFidelidade(){
  fidelidade++;
}

client::int getFidelidade(){
  return fidelidade;
};

client::void setIdade(int _idade){
  idade = _idade;
};