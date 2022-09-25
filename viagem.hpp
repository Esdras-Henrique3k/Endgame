#include "cadastro.hpp"

class viagem{
   
  onibus busao;
  funcionario motorista;
  vector<cliente> passageiro;
  int peso;
   
  public:
   
  viagem();
  void adicionarPassageiro();
  ~viagem();
  
 
  
};
