#include "bboard.hpp"
#include "user.hpp"
#include <algorithm>
#include <iostream>
#include <string>

bboard::bboard(): title("ENDGAME BUS"), user_listADM(),user_listDRIVER(),user_listCLIENT(){}

void bboard::cadastrar(std::string cargo,std::string usuario, std::string senha){
  if(cargo=="administrador") user_listADM.push_back(user(usuario,senha));
  if(cargo=="motorista") user_listDRIVER.push_back(user(usuario,senha));
  if(cargo=="passageiro") user_listCLIENT.push_back(user(usuario,senha));
}
bool bboard::loginADM(){
    std::string sn, pw;
    bool found = false;
    std::cout << "Bem vindo ao sistema do " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('Q' ou 'q' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if((sn == "Q" || sn == "q")){
            std::cout << "Adeus!";
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; cin.clear();
        auto itr = user_listADM.begin();
        while (itr != user_listADM.end()){
            if (itr->check(sn, pw)) {
                std::cout << "Bem vindo " << sn << "!" << std::endl;
                
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
    std::cout << "Bem vindo ao sistema do " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('Q' ou 'q' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if((sn == "Q" || sn == "q")){
            std::cout << "Adeus!";
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; cin.clear();
        auto itr = user_listDRIVER.begin();
        while (itr != user_listDRIVER.end()){
            if (itr->check(sn, pw)) {
                std::cout << "Bem vindo " << sn << "!" << std::endl;
                
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
    std::cout << "Bem vindo ao sistema do " << title << std::endl;

    while (!found) {
        found = false;
        std::cout << "\nDigite o seu usuario ('Q' ou 'q' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if((sn == "Q" || sn == "q")){
            std::cout << "Adeus!";
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; cin.clear();
        auto itr = user_listCLIENT.begin();
        while (itr != user_listCLIENT.end()){
            if (itr->check(sn, pw)) {
                std::cout << "Bem vindo " << sn << "!" << std::endl;
          
                found = true;
                break;
            }
          itr++;
        }
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  return found;
}