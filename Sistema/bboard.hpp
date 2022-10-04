#ifndef BBOARD_HPP
#define BBOARD_HPP

#include <string>
#include <vector>
#include "user.hpp"


class bboard{
private:
    std::string title;
    std::vector<user> user_listADM;
    std::vector<user> user_listDRIVER;
    std::vector<user> user_listCLIENT;
    
public:
    bboard();
    void cadastrar(std::string& cargo,std::string& usuario, std::string& senha);
    bool loginADM();
    bool loginDRIVER();
    bool loginCLIENT();
};

#endif