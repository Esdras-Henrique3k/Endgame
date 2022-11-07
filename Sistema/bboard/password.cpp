#include <iostream>
#include "password.hpp"


void Password::insert(const int& CPF_usuario,
                      const std::string& login,
                      const std::string& password) {
  
  /**
   * Lembre-se que as credenciais so podem ser inseridas com as seguintes
   * condicoes:
   * Condicao 1: A senha nao pode ter a seguencia '123456'.
   * Condicao 2: A senha nao pode ter mais do que 10 caracteres (no maximo 10).
   * Condicao 3: A senha nao pode ter menos do que 6 caracteres (no minimo 6).
   * Condicao 4: A senha nao pode ter caracteres em branco ' '.
   *
   * Exemplos de senhas invalidas:
   * 123456
   * test_123456
   * 123456_test
   * test_123456_test
   * senha test
   */
}

void Password::remove(const int& CPF_usuario) {
  
}

//Esse metodo nao insere novas credenciais, apenas atualiza as ja existentes
// Alem disso, o login e/ou senha do usuario so podem ser
//atualizados se a senha armazenada no sistema for igual a old_password.
//Nao esqueca de verificar se o novo password tambem e valido
void Password::update(const int& CPF_usuario,
                      const std::string& login,
                      const std::string& old_password,
                      const std::string& new_password) {

  
 
}


bool Password::checkPassword(const std::string& password) const {


  
}
