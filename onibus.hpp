#include <iostream>

class onibus{
  
  char modelo;
  double peso;
  double consumo;
  int assentos;
  
  public:
  
  onibus(char _modelo, double _peso, double _consumo, int _assentos);
  void getPeso();
  void getAssentos();
  
}

/* 
Modelos:
  'a' tem peso máximo(passageiros + motorista + bagagens) = 5600 [51 assentos incluindo motorista] e percorre 3km/L
  'b' tem peso máximo(passageiros + motorista + bagagens) = 4500 [41 assentos incluindo motorista] e percorre 4km/L
  'c' tem peso máximo(passageiros + motorista + bagagens) = 3400 [31 assentos incluindo motorista] e percorre 5km/L 
 */
  
/* o combustivel utilizado no onibus será o diesel que custa R$ 6,98/Litro em média no estado de MG */
