#include <iostream>
#include <string>
#include <stdexcept>

#include "client.hpp"
#include "bboard.hpp"
#include "rota.hpp"

client::client(const std::string& uname, const std::string& pass) : User(uname, pass) {}
client::~client() {}

void client::incrementarFidelidade() {
    fidelidade++;
}

int client::getFidelidade() {
    return fidelidade;
}

void client::setIdade(int _idade) {
    idade = _idade;
}

bool client::painel() {
    int i = 1;
    for(std::vector<rota>::iterator iterator = bboard::get_instance()->rotas.begin(); iterator != bboard::get_instance()->rotas.end(); iterator++) {
        std::cout << i << ": " << iterator->descricaoRota() << std::endl;
        i++;
    }

    int rotaEscolhida = 0;
    std::cout << "Escolha a rota desejada: ";
    std::cin >> rotaEscolhida;

    try {
        bboard::get_instance()->decrementarTicketDaRota(bboard::get_instance()->rotas[i-1]);
        std::cout << std::endl << "Compra realizada" << std::endl;
        return true;
    }
    catch(std::exception &e) {
        std::cout << std::endl << "Todos tickets ja foram vendidos" << std::endl;
        return false;
    }
}
