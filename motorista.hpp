#include <iostream>
#include <string>

class motorista{
  string nome;
  int idade;
  double peso;
  int viagens();
  
  motorista(string _nome, int _idade, double _peso);
  bool disponibilidade();
  void estado();
  void experiencia();
  
}
