#include <iostream>
#include <string>
#include "bboard.hpp"
#include "user.hpp"

using namespace std;

int main(){
  
  bboard* sistema = new bboard();
  string opcao;
  bool validacao=false;
  string cargo,usuario,senha;
  int numero;
  
  cout<<"Digite uma das opcoes (login/cadastro): ";
  while(cin>>opcao){
  
  if(opcao=="cadastro") numero=1;
  if(opcao=="login") numero=2;
  
  
  switch(numero){
    
    case 1:
      
    
    cout<<"\nDigite o seu cargo (administrador/motorista/cliente): ";
    cin >> cargo;
    cout<<"\nDigite o usuario: ";
    cin >> usuario;
    cout<<"\nDigite a senha: ";
    cin >> senha;
      
    sistema->cadastrar(cargo,usuario,senha);
    cout<<"\nDigite uma das opcoes (login/cadastro): ";
      
    break;
    
    case 2:
      
    
    cout<<"\nDigite o seu cargo(administrador/motorista/cliente): ";
    cin >> cargo;
      
    if(cargo=="administrador"){
    
    validacao = sistema->loginADM();
    while(validacao){
    string comando;
    cout<<"\nDigite o comando ('logout' para encerrar): ";
    cin>>comando;
    if(comando=="logout"){
	validacao = false;}
      
    }
      
    }

    if(cargo=="motorista"){

    validacao = sistema->loginDRIVER();
      
    while(validacao){
    string comando;
    cout<<"\nDigite o comando ('logout' para encerrar): ";
    cin>>comando;
    if(comando=="logout"){
	validacao = false;}
      
    }
      
    }

    if(cargo=="cliente"){
      
    validacao = sistema->loginCLIENT();

    while(validacao){
    string comando;
    cout<<"\nDigite o comando ('logout' para encerrar): ";
    cin>>comando;
    if(comando=="logout"){
	validacao = false;}
      
    }
      
    }
    
    cout<<"\nDigite uma das opcoes (login/cadastro): ";
    
    break;
    
  }
}
  return 0;
}