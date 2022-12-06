#include <iostream>
#include <string>

#include "driver.hpp"
#include "bboard.hpp"

driver::driver(const std::string& uname, const std::string& pass) : User(uname, pass) {}
driver::~driver() {}

void driver::setRota(rota* _rota) {
    responsavel = _rota;
}

std::string driver::getRota() {
    return responsavel->descricaoRota();
}

bool driver::painel() {
    bool verificacao = false;
    std::string comando;

    int x;

    while(!verificacao) {
        std::cout << "Digite um comando (verificar/exit): ";
        std::cin >> comando;

        if(comando == "verificar") {
            x = 1;
        }
        if(comando == "exit") {
            x = 2;
        }

        switch(x) {
            case(1): {
                std::cout << "\nticket verificado!\n" << std::endl;

                /*std::string result;
                std::cin >> result;
                if(result == "valido") {
                    //bboard::get_instance()->removerRota();
                    verificacao = true;
                }
                else {
                    std::cout << "\nticket invalido!\n" << std::endl;
                }*/

                break;
            }
            case(2): {
                verificacao = true;
                break;
            }
        }
    }
    
    return verificacao;
}
