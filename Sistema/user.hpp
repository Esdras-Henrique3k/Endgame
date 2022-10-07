#ifndef USER_HPP
#define USER_HPP
#include <string>

class user{
private:
    std::string username;
    std::string password;
public:
    user(const std::string& uname, const std::string& pass);
    std::string get_username() const;
    bool available(const std::string &uname) const;
    bool check(const std::string &uname, const std::string &pass) const;
   
};
#endif