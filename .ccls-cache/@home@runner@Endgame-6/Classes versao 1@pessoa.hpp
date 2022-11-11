#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>

class Pessoa{
std::string ID;
std::string nome;
int idade;

public:

Pessoa(std::string Id,std::string _nome,int _idade);
std::string getNome();
int getIdade();
std::string getID();
void setNome(string _nome);
void setIdade(int _idade);

};

#endif