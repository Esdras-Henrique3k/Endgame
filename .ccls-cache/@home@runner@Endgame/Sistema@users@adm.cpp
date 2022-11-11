#include <iostream>
#include "adm.hpp"
#include "bboard.hpp"

void adm::incrementarCaixa(float _caixa){
	
  caixa+=_caixa;
	
}

bool user::painel(){
	
  bool stream = true;
  int x; std::string y;
	
while(stream){
	  
    std::cout<<"Digite uma das opcoes 'adicionar rota' | 'remover rota' | 'exit': ";
    std::cin>>y;
	  
if(y=="adionar rota") {
 // rota* x = new rota;
//x-> adicionarRota();
	
std::string origem;
std::string destino;
int horario;
int paradas;
std::string tipo;
int tickets;

	std::cout<<"\nDigite a origem: ";
std::cin>>origem;
	std::cout<<"\nDigite o destino: ";
std::cin>>destino;
	std::cout<<"\nDigite o horario: ";
std::cin>>horario;
	std::cout<<"\nDigite o numero de paradas: ";
std::cin>>paradas;
	std::cout<<"\nDigite o tipo: ";
std::cin>>tipo;
	std::cout<<"\nDigite o numero de tickets: ";
std::cin>>tickets;

sistema->adicionarRota(rota(origem, destino, horario, paradas, tipo, tickets));
		
		
}else{std::cout<<"opcao invalida!"};
    if(y=="remover rota"){
std::string origem;
std::string destino;
int horario;
int paradas;
std::string tipo;
int tickets;

	std::cout<<"\nDigite a origem: ";
std::cin>>origem;
	std::cout<<"\nDigite o destino: ";
std::cin>>destino;
	std::cout<<"\nDigite o horario: ";
std::cin>>horario;
	std::cout<<"\nDigite o numero de paradas: ";
std::cin>>paradas;
	std::cout<<"\nDigite o tipo: ";
std::cin>>tipo;
	std::cout<<"\nDigite o numero de tickets: ";
std::cin>>tickets;
		
sistema->removerRota(rota(origem, destino, horario, paradas, tipo, tickets));
		
		}else{std::cout<<"opcao invalida!"};
	
    if(y=="exit"){ stream=false;}else{std::cout<<"opcao invalida!"};
	
               }
  
  
}
rota adm::adicionarRota(){
  
}
driver adm::adicionarDriver(driver motorista){
  
}