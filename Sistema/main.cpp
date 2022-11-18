#include <iostream>
#include <string>
#include "bboard.hpp"
#include "user.hpp"

using namespace std;

int main(){
	
bool status=true;
	
while(status){
	
	adm* main = new adm("thanos", "vingadores");
	
	cout<<"cadastrar/login: ";
	cin>>comando;
	
	if(comando=="cadastrar"){
	string cargo,user,senha;
	cout<<"\nDigite seu cargo:";
	cin>>cargo;
	cout<<"\nnome de usuario:";
	cin>>user;
	cout<<"\nsenha";
	cin>>senha;
	main->sistema->cadastrar(cargo,user,senha);
	
	}else if(comando=="login"){
	main->sistema->login();
		
	}else{
		cout<<"\nComando inválido, tente novamente!\n";
	}
	
	}
	  
  return 0;
}