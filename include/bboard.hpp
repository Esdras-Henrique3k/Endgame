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
        int comprado;

        std::vector<rota> rotas;
        std::vector<User*> user_list;

        bboard();
        static bboard* get_instance();

        void cadastrar(std::string& cargo, std::string& usuario, std::string& senha);
        //void remove(const std::string& usuario);

        //void update(const std::string& cargo,
        //           const std::string& login,
        //           const std::string& old_password,
        //           const std::string& new_password);

        bool login();
        void adicionarRota(rota x);
        void removerRota(rota y);
        void decrementarTicketDaRota(rota alvo);

        //void adicionarTicket();
	    //void removerTicket();
    
    private:
        bool checkPassword(const std::string& password) const;
};

#endif