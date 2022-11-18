#ifndef USER_HPP
#define USER_HPP
#include <string>
#include "bboard.hpp"
class user{
private:

    std::string username;
    std::string password;
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
