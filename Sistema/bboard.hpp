#ifndef BBOARD_HPP
#define BBOARD_HPP

#include <string>
#include <vector>
#include <map>
#include <list>
#include "driver.hpp"
#include "adm.hpp"
#include "client.hpp"
#include "rota.hpp"
#include "ticket.hpp"


class bboard{
private:
    std::string title;
    std::vector<user> user_list;
	int comprado;
    std::list<rota> rotas;
    bool checkPassword(const std::string& password) const;
    
public:
    bboard();
    void cadastrar(std::string& cargo,
                   std::string& usuario, 
                   std::string& senha);

    //void remove(const std::string& usuario);

    //void update(const std::string& cargo,
     //           const std::string& login,
     //           const std::string& old_password,
     //           const std::string& new_password);

    bool login();
	void adicionarTicket();
	void removerTicket();
    void adicionarRota(rota x);
    void removerRota(rota y);

    
};

#endif
