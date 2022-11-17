#ifndef USER_HPP
#define USER_HPP
#include <string>
#include "bboard.hpp"
class user{
protected:
    std::string ID;
    std::string nome;
    std::string username;
    std::string password;
    static bboard* sistema = new bboard();
public:
    user(const std::string& uname, const std::string& pass);
    std::string get_username() const;
    std::string get_pass() const;
    void setUsername(const std::string& uname);
    void setPass(const std::string& pass);
    bool available(const std::string &uname) const;
    bool check(const std::string &uname, const std::string &pass) const;
    virtual bool painel() = 0;
   
};
#endif