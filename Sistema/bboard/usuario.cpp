#include "usuario.hpp"

//construtor padrao que inicializa as variaveis privadas da classe
Usuario::Usuario(const std::string& login, const std::string& password):_login(login),_password(password){}

//retorna o login do usuario
std::string Usuario::getLogin() const {
  return _login;
}

//retorna a senha do usuario
std::string Usuario::getPassword() const {
  return _password;
}

//nova senha do usuario
void Usuario::setPassword(const std::string& password) {
  _password = password;
}

//novo login do usuario
void Usuario::setLogin(const std::string& login) {
_login = login;
}

