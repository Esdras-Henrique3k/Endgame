#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <string>

#include "User.hpp"
#include "rota.hpp"

class driver : public User {
    private:
        rota* responsavel;
        
    public:
        driver(const std::string& uname, const std::string& pass);
        ~driver();

        void setRota(rota* _rota);
        std::string getRota();

        virtual bool painel() override;
};

#endif