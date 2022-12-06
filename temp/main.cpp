#include <iostream>
#include <string>

#include "bboard.hpp"

int main() {
    bool status = true;

    while(status) {
        std::string comando;

        std::cout << "cadastrar/login: ";
	    std::cin >> comando;

        if(comando == "cadastrar") {
            std::string cargo, user, senha;

            std::cout << "\nDigite seu cargo:";
            std::cin >> cargo;

            std::cout << "\nnome de usuario:";
            std::cin >> user;

            std::cout << "\nsenha: ";
            std::cin >> senha;

            bboard::get_instance()->cadastrar(cargo, user, senha);
        }
        else if(comando == "login") {
            bboard::get_instance()->login();
        }
        else {
            std::cout << "\nComando inválido, tente novamente!\n";
        }
    }

    return 0;
}
