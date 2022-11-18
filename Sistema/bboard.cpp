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
		if(cargo=="client")user_list.push_back(client(usuario,senha));
		if(cargo=="driver")user_list.push_back(driver(usuario,senha));
		if(cargo=="adm")user_list.push_back(adm(usuario,senha));
		}

bool bboard::login(){
    std::string sn, pw;
    bool found = false;
    std::cout << "\nBEM VINDO A " << title << std::endl;

    while (!found) {
        
        std::cout << "\nDigite o seu usuario ('exit' para encerrar): ";
        std::cin >> sn; std::cin.clear();
        if(sn == "exit"){
            break;
        }
        std::cout << "Digite sua senha: ";
        std::cin >> pw; std::cin.clear();
        std::vector<user>::iterator itr = user_list.begin();
        while (itr != user_list.end()){
          
            if (itr->check(sn, pw)){
                std::cout << "\nAcesso concedido!"<< std::endl;
				itr->painel();
                found = true;
                break; }
          
          itr++;
          
        }
      
        if (!found){ std::cout << "Usuario ou senha incorreta!" << std::endl; }
    }
  
  return found;
  
}

 bool bboard::checkPassword(const std::string& password) const{
    /*
 * Lembre-se que as credenciais so podem ser inseridas com as seguintes
   * condicoes:
   * Condicao 1: A senha nao pode ter a seguencia '123456'.
   * Condicao 2: A senha nao pode ter mais do que 10 caracteres (no maximo 10).
   * Condicao 3: A senha nao pode ter menos do que 6 caracteres (no minimo 6).
   * Condicao 4: A senha nao pode ter caracteres em branco ' '.
  */
 /*
bool senha;
  std::string sequencia ("123456");
  std::size_t found1 = password.find(sequencia);
    if(found1!=std::string::npos){
     senha = false;
    }
    if(password.size() < 6 || password.size() > 10){
     senha = false;
    }
    std::string espaco (" ");
    std::size_t found2 = password.find(espaco);
    if(found2!=std::string::npos){
     senha = false;
    }
   if(senha == false){
     std::cout << "Senha invalida";
   }
   else {}
*/
   }
void bboard::adicionarTicket(){
	comprado++;
	}
void bboard::removerTicket(){
	comprado--;
}

void bboard::adicionarRota(rota x){
  rotas.push_back(x);
}

void bboard::removerRota(rota y){
	
  for(auto a : rotas){
  if(a.descricaoRota == y.descricaoRota){rotas.erase(a) break;}
  
	
}

//void bboard::remove(const std::string& usuario) {
  
//}