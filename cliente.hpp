#include <iostream>
#include <string>
class cliente{

string nome;
int idade;
double peso;
int fidelidade=0; /*será sempre inicializada com 0*/

public:
  
cliente(string _nome, int _idade, double _peso);
void incrementarFidelidade();
void getFidelidade();
void getPeso();


};
