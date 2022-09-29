#ifndef PASSAGEIRO_HPP
#define PASSAGEIRO_HPP

class passageiro : public pessoa{

string categoria;
int fidelidade;

public:

passageiro();
void setCategoria(string _categoria);

};

#endif