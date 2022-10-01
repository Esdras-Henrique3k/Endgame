#ifndef MOTORISTA_HPP
#define MOTORISTA_HPP

class motorista : public pessoa{

rota* responsavel;

public:

motorista();
rota* getRota();

};

#endif