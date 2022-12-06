#include <string>

#include "User.hpp"

User::User() {}
User::User(const std::string& uname, const std::string& pass) : username(uname), password(pass) {}

void User::setUsername(const std::string& uname) {
    username = uname;
}

std::string User::get_username() const {
    return username;
}

void User::setPass(const std::string& pass) {
    password = pass;
}

std::string User::get_pass() const {
    return password;
}

bool User::available(const std::string& uname) const {
    return (username == uname);
}

bool User::check(const std::string& uname, const std::string& pass) const {
    return ((username == uname) && (password == pass));
}
