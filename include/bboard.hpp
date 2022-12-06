#ifndef BBOARD_HPP
#define BBOARD_HPP

#include <string>
#include <vector>
#include <list>

#include "User.hpp"
#include "rota.hpp"

class bboard {
    private:
        static bboard* instancia;
        std::string title;
        
    public:

        std::vector<rota> rotas;
        std::vector<User*> user_list;
        bboard();
        static bboard* get_instance();

        void cadastrar(std::string& cargo, std::string& usuario, std::string& senha);
        bool login();
        void adicionarRota(rota x);
        void removerRota(rota y);
        void decrementarTicketDaRota(rota alvo);
		
};

#endif