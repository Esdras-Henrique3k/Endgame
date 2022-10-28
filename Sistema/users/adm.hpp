#ifndef ADM_HPP
#define ADM_HPP
#include "user.hpp"
#include "rota.hpp"
#include "bboard.hpp"
class adm : public user{

private:
bboard* sistema = new bboard();
float caixa;

public:

adm(const std::string& uname, const std::string& pass);
void incrementarCaixa(float _caixa);
bool painel override();

}

#endif