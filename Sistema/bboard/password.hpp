#ifndef PASSWORD_H
#define PASSWORD_H

#include "usuario.hpp"
#include <map>


class Password {
 private:
  //Verifica se o password passa em todas as restricoes
  //return true Verdadeiro se passa em todas as condicoes
  //return false Falso se nao passa em pelo menos uma das condicoes
  bool checkPassword(const std::string& password) const;

  //Container que armazena as informacoes. Ele
  //utiliza o CPF de usuario como chave e as informacoes sao do tipo Usuario.
  std::map<int, Usuario> m_passwords;

 public:
 
   //Adiciona uma nova credencial.
  void insert(const int& CPF_usuario,
              const std::string& login,
              const std::string& password);

 
  //Remove as informacoes de um determinado tipo de Usuario
  void remove(const int& CPF_usuario);

  //Atualiza as credenciais do tipo de usuario.
  void update(const int& CPF_usuario,
              const std::string& login,
              const std::string& old_password,
              const std::string& new_password);
 
};
#endif
