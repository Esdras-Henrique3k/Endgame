#include <iostream>
#include <string>

class funcionario{
  string nome;
  int idade;
  double peso;
  int experiencia; /* numero de viagens*/
  char estado;
  /* pensei em dividir em 3 estados (a,b,c) sendo 'c' (viagem curta), 'b' (viagem média) e 'a' viagem longa, assim, se tornando um pré requisito 
  a depender da duração da viagem*/
  
  public:
  
  funcionario(string _nome, int _idade, double _peso, char _estado);
  void incrementarExperiencia();
  void getEstado();
  void getExperiencia();
  void getPeso();
  
}
