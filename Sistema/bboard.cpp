#include "bboard.hpp"
#include "user.hpp"
#include <algorithm>
#include <iostream>
#include <string>


bboard::bboard(): title("ENDGAME BUS"){}


void bboard::cadastrar(std::string& cargo,std::string& usuario, std::string& senha){
	

        if(cargo=="administrador"){
        std::vector<user>::iterator itr = user_listADM.begin();	
		while (itr != user_listADM.end()){
        	if(itr->available(usuario)){ std::cout << "\nUsuario existente"<< std::endl; return; }
            itr++; }
		user_listADM.push_back(user(usuario,senha));
		}
        
        
        if(cargo=="motorista"){
		std::vector<user>::iterator itr = user_listDRIVER.begin();
        while (itr != user_listDRIVER.end()){
        	if(itr->available(usuario)){ std::cout << "\nUsuario existente"<< std::endl; return; }
            itr++; }
        user_listDRIVER.push_back(user(usuario,senha));
    	}
    	
    	
    	if(cargo=="cliente"){
    	std::vector<user>::iterator itr = user_listCLIENT.begin();
        while (itr != user_listCLIENT.end()){
        	if(itr->available(usuario)){ std::cout << "\nUsuario existente"<< std::endl; return; }
            itr++; }
        user_listCLIENT.push_back(user(usuario,senha));
		}
             
}
bool bboard::loginADM(){
    std::string sn, pw;
    bool found = false;
    std::cout << "\nBEM VINDO AO SISTEMA DOS ADMINISTRADORES DO " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('exit' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if(sn == "exit"){
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; std::cin.clear();
        std::vector<user>::iterator itr = user_listADM.begin();
        while (itr != user_listADM.end()){
            if (itr->check(sn, pw)) {
                std::cout << "\nAcesso concedido!"<< std::endl;
                
                found = true;
                break;
                
            }
          itr++;
        }
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  return found;
}
bool bboard::loginDRIVER(){
    std::string sn, pw;
    bool found = false;
    std::cout << "\nBEM VINDO AO SISTEMA DOS MOTORISTAS DO " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('exit' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if(sn == "exit"){
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; std::cin.clear();
        std::vector<user>::iterator itr = user_listDRIVER.begin();
        while (itr != user_listDRIVER.end()){
            if (itr->check(sn, pw)) {
                std::cout << "\nAcesso concedido!"<< std::endl;
                
                found = true;
                break;
            }
          itr++;
        }
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  return found;
}
bool bboard::loginCLIENT(){
    std::string sn, pw;
    bool found = false;
    std::cout << "\nBEM VINDO AO " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('exit' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if(sn == "exit"){
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; std::cin.clear();
        std::vector<user>::iterator itr = user_listCLIENT.begin();
        while (itr != user_listCLIENT.end()){
            if (itr->check(sn, pw)) {
                std::cout << "\nAcesso concedido!"<< std::endl;
          
                found = true;
                break;
            }
          itr++;
        }
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  return found;
}