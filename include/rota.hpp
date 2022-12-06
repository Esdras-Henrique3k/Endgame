#ifndef ROTA_HPP
#define ROTA_HPP

#include <string>

class rota {
    private:
        std::string origem;
        std::string destino;
        int horario;
        int paradas;
        int tickets;
        std::string tipo;

    public:
        rota(std::string _origem, std::string _destino, int _horario, int _paradas, int _tickets, std::string _tipo);
        std::string getOrigem();
        std::string getDestino();
        int getHorario();
        int getParadas();
        void decrementarTickets();
        std::string getTipo();
        std::string descricaoRota();
};

#endif