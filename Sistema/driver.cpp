#include "driver.hpp"
void driver::setRota(Rota* _rota){
	responsavel = _rota;
}
std::string driver::getRota{
  responsavel->descricaoRota();
}

bool driver::painel(){
	
bool verificacao=false;
	
std::string comando;
	
int x;
	
std::cout<<"Digite um comando (verificar ticket/exit): ";
	
std::cin>>comando;
	
if(comando=="verificar ticket") x=1;
	
if(comando=="exit") x=2;

while(!verificacao){
	switch(x){
		
		case 1: 
			
		std::string result;
		std::cin>>result;
	

		if(result == "valido"){
		main->sistema->removerTicket();
	  	std::cout<<"\nticket verificado!\n"<<std::endl;
		verificacao=true;
  		}else{ std::cout<<"\nticket invalido!\n"<< std::endl;}
			
		break;
		
		case 2:
			
		verificacao=true;
			
		break;
	}
	}
	return verificacao;
}
