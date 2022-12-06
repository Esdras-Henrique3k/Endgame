#ifndef ADM_HPP
#define ADM_HPP

#include <string>

#include "User.hpp"

class adm : public User {
    private:
        float caixa;

    public:
        adm(const std::string& uname, const std::string& pass);
        ~adm();

        void incrementarCaixa(float _caixa);
        virtual bool painel() override;
};

#endif