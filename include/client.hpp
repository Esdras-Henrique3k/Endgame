#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

#include "User.hpp"

class client : public User {
    private:
        int fidelidade;
        int idade;
        
    public:
        client(const std::string& uname, const std::string& pass);
        ~client();

        void incrementarFidelidade();
        int getFidelidade();
        void setIdade(int _idade);
        
        virtual bool painel() override;
};

#endif