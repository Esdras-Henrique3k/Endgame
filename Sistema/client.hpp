#ifndef CLIENT_HPP
#define CLIENT_HPP
#include "use.hpp"

class client : public user{

private:


int fidelidade;
int idade;

public:

client(const std::string& uname, const std::string& pass);
void incremenarFidelidade();
int getFidelidade();
void setIdade();
bool painel override();

};

#endif