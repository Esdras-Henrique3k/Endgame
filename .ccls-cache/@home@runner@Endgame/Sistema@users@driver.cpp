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
std::cout<<"Digite um comando (""verificar ticket""/""exit""): ";
std::cin>>comando;
if(comando=="verificar ticket") x=1;
if(comando=="exit") x=2;

	switch(x){
		
		case 1: if(ticket.rota == *_rota){
	  	std::cout<<"ticket verificado!"<<std::endl;
  		}else{ std::cout<<"ticket invalido!"<< std::endl;}
		break;
		
		case 2:
		verificacao=true;
		break;
	}

	return verificacao;
}