#include "cadastro.hpp"

class viagem{
   
  onibus busao;
  funcionario motorista;
  vector<cliente> passageiro;
  double peso;
  int assento;
   
  public:
   
  viagem();
  void adicionarPassageiro();
  ~viagem();
  

};

 /* o destructor seria utilizado quando a viagem fosse iniciada conforme os requisitos, 
  o que inclui o peso máximo, ocupação máxima de assentos, motorista livre e disponibilidade do onibus */
