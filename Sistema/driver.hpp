#ifndef DRIVER_HPP
#define DRIVER_HPP
#include "rota.hpp"
#include "user.hpp"

class driver : public user{

private:

rota* responsavel;

public:

void setRota();
std::string getRota();
bool painel override();

};

#endif
