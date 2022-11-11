#include "pessoa.hpp"

Pessoa::Pessoa(std::string Id,std::string _nome,int _idade): ID(Id),nome(_nome),idade(_idade) 

std::string Pessoa::getNome(){
  return nome;
}
int Pessoa::getIdade(){
  return idade;
}
std::string Pessoa::getID(){
  return ID;
}
void Pessoa::setNome(string _nome){
  nome = _nome;
}
void Pessoa::setIdade(int _idade){
  idade = _idade;
}
