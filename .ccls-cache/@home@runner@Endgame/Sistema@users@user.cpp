#include "user.hpp"
#include <vector>

user::user(const std::string& uname, const std::string& pass) : username(uname), password(pass){}

std::string user::get_username() const {
    return username;
}

bool user::check(const std::string &uname, const std::string &pass) const{
    return ((username == uname) && (password == pass));
}

bool user::available(const std::string &uname) const{
    return ((username == uname));
}

void user::setUsername(const std::string& uname){
  username = uname;
}
void user::setPass(const std::string& pass){
  password = pass;
}