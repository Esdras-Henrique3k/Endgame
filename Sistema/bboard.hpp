#ifndef BBOARD_HPP
#define BBOARD_HPP

#include <string>
#include <vector>
#include <list>
#include "driver.hpp"
#include "adm.hpp"
#include "client.hpp"


class bboard{
private:
    std::string title;
    std::vector<user> user_list;
    std::list<rota> rotas;
    
    
public:
    bboard();
    void cadastrar(std::string& cargo,std::string& usuario, std::string& senha);
    bool login();
    void adicionarRota(rota x);
    void removerRota(rota y);
};

#endif