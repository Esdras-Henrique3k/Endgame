#ifndef ADM_HPP
#define ADM_HPP
#include "user.hpp"
#include "rota.hpp"
#include "bboard.hpp"
class adm : public user{

private:

float caixa;

public:

adm(const std::string& uname, const std::string& pass);
void incrementarCaixa();
bool painel override();


}

#endif