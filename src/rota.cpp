#include <string>
#include <stdexcept>

#include "rota.hpp"

rota::rota(std::string _origem, std::string _destino, int _horario, int _paradas, int _tickets, std::string _tipo) : origem(_origem), destino(_destino), horario(_horario), paradas(_paradas), tickets(_tickets), tipo(_tipo) {}

std::string rota::getOrigem() {
    return origem;
}

std::string rota::getDestino() {
    return destino;
}

int rota::getHorario() {
    return horario;
}

int rota::getParadas() {
    return paradas;
}

void rota::decrementarTickets() {
    /*if(tickets <= 0) {
        throw std::exception();
    }*/

    tickets--;
}

std::string rota::getTipo() {
    return tipo;
}

std::string rota::descricaoRota() {
    std::string str;
    
    str = "Origem: "+ origem +'\n'+"Destino: "+ destino + '\n' + "Parte às " + std::to_string(horario) + '\n' + "Quantidade de paradas: " + std::to_string(paradas) +'\n' 
        + "Modelo de assento: " + tipo;
        
    return str;
}
