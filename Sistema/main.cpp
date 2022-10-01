#include <iostream>
#include <string>
#include "bboard.hpp"
#include "user.hpp"

using namespace std;

int main(){
  
  bboard* sistema=new bboard();
  string opcao;
  bool validacao=false;
  string cargo,usuario,senha;
  int numero;
  
  cout<<"Digite uma das opcoes (login/cadastro): ";
  cin>>opcao;
  if(opcao=="cadastro") numero=1;
  if(opcao=="login") numero=2;
  
    
  switch(numero){
    
    case 1:
      
    
    cout<<"\nDigite o seu cargo: ";
    cin >> cargo;
    cout<<"\nDigite o usuario: ";
    cin >> usuario;
    cout<<"\nDigite a senha: ";
    cin >> senha;
      
    sistema->cadastrar(cargo,usuario,senha);
      
    break;
    
    case 2:
      
    
    cout<<"\nDigite o seu cargo: ";
    cin >> cargo;
    cout<<"\nDigite o usuario: ";
    cin >> usuario;
    cout<<"\nDigite a senha: ";
    cin >> senha;
      
    if(cargo=="administrador"){
      
    validacao = sistema->loginADM();
      
    while(!validacao){
    validacao = true;
    string comando;
    cin>>comando;
    if(comando=="encerrar") validacao = false;
      
    }
      
    }

    if(cargo=="motorista"){

    validacao = sistema->loginDRIVER();
      
    while(!validacao){
    validacao = true;
    string comando;
    cin>>comando;
    if(comando=="encerrar") validacao = false;
      
    }
      
    }

    if(cargo=="passageiro"){
      
    validacao = sistema->loginCLIENT();

    while(!validacao){ 
    validacao = true;
    string comando;
    cin>>comando;
    if(comando=="encerrar") validacao = false; 
    }
      
    }
      
    break;
    
  }
  return 0;
}
