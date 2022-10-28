#include "bboard.hpp"
#include "driver.hpp"
#include "adm.hpp"
#include "client.hpp"
#include <algorithm>
#include <iostream>
#include <string>


bboard::bboard(): title("ENDGAME BUS"){}


void bboard::cadastrar(std::string& cargo,std::string& usuario, std::string& senha){
	
  std::vector<user>::iterator itr = user_list.begin();	
		while (itr != user_list.end()){
      
        	if(itr->available(usuario)){ std::cout << "\nUsuario existente"<< std::endl; return;}
      
            itr++; 
      }
		user_list.push_back(user(usuario,senha));
		}

bool bboard::login(){
    std::string sn, pw;
    bool found = false;
    std::cout << "\nBEM VINDO A " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('exit' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if(sn == "exit"){
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; std::cin.clear();
        std::vector<adm>::iterator itr = user_list.begin();
        while (itr != user_list.end()){
          
            if (itr->check(sn, pw)) {
                std::cout << "\nAcesso concedido!"<< std::endl;
                found = true;
                break; }
          
          itr++;
          
        }
      
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  
  return found;
  
}

void bboard::adicionarRota(rota x){
  rotas.insert()
  
}

void bboard::removerRota(rota y){
	
  for(auto a = rotas.begin(); a != rotas.end(); a++){
  if((*a)==y){rotas.erase(y) break;}
  
	
}