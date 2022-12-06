#include <iostream>
#include <string>

#include "adm.hpp"
#include "bboard.hpp"

adm::adm(const std::string& uname, const std::string& pass) : User(uname, pass) {}
adm::~adm() {}

void adm::incrementarCaixa(float _caixa) {
    caixa += _caixa;
}

bool adm::painel() {
    bool stream = true;
    std::string y;

    while(stream) {
        std::cout << "Digite uma das opcoes 'adicionar rota' | 'remover rota' | 'exit': ";
        std::getchar();
        std::getline(std::cin, y);

        if(y == "adicionar rota") {
            // rota* x = new rota;
            //x-> adicionarRota();   

            std::string origem;
            std::string destino;
            int horario;
            int paradas;
            std::string tipo;
            int tickets;

            std::cout << "\nDigite a origem: ";
            std::cin >> origem; // TODO: getchar() getline()

            std::cout << "\nDigite o destino: ";
            std::cin >> destino; // TODO: getchar() getline()

            std::cout << "\nDigite o horario: ";
            std::cin >> horario;

            std::cout << "\nDigite o numero de paradas: ";
            std::cin >> paradas;

            std::cout << "\nDigite o tipo: ";
            std::cin >> tipo;

            std::cout << "\nDigite o numero de tickets: ";
            std::cin >> tickets;

            bboard::get_instance()->adicionarRota(rota(origem, destino, horario, paradas, tickets, tipo));
        }
        else if(y == "remover rota") {
            std::string origem;
            std::string destino;
            int horario;
            int paradas;
            std::string tipo;
            int tickets;

            std::cout<<"\nDigite a origem: ";
            std::cin>>origem; // TODO: getline()

            std::cout<<"\nDigite o destino: ";
            std::cin>>destino; // TODO: getline()

            std::cout<<"\nDigite o horario: ";
            std::cin>>horario;

            std::cout<<"\nDigite o numero de paradas: ";
            std::cin>>paradas;

            std::cout<<"\nDigite o tipo: ";
            std::cin>>tipo; // TODO: getchar() getline()

            std::cout<<"\nDigite o numero de tickets: ";
            std::cin>>tickets;

            bboard::get_instance()->removerRota(rota(origem, destino, horario, paradas, tickets, tipo));
        }
        else if(y == "exit") {
            stream = false;
        }
        else {
            std::cout << "opcao invalida!\n";
        }
    }

    return stream;
}
