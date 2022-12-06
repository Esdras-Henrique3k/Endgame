#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
    protected:
        std::string username;
        std::string password;

    public:
        /**
         * @brief Cria novo objeto do tipo usuário
         * 
         */
        User();

        /**
         * @brief Cria novo objeto do tipo usuário
         * 
         * @param uname É o nome do usuário no sistema
         * @param pass É a senha de acesso do usuário no sistema
         */
        User(const std::string& uname, const std::string& pass);

        /**
         * @brief Define o atributo do nome de usuário
         * 
         * @param uname É o novo nome de usuário que será definido
         */
        void setUsername(const std::string& uname);

        /**
         * @brief Retorna o nome de usuário
         * 
         * @return std::string É o nome de usuário
         */
        std::string get_username() const;

        /**
         * @brief Define o atribuiro de senha do usuário
         * 
         * @param pass É a nova senha do usuário
         */
        void setPass(const std::string& pass);

        /**
         * @brief Retorna a senha do usuário
         * 
         * @return std::string É a senha do usuário
         */
        std::string get_pass() const;

        /**
         * @brief 
         * 
         * @param uname 
         * @return true 
         * @return false 
         */
        bool available(const std::string& uname) const;

        /**
         * @brief Verifica as credênciais do usuário
         * 
         * @param uname É o nome do usuário
         * @param pass É a senha do usuário
         * @return true Se o nome de usuário e senha estão corretos
         * @return false Se o nome de usuário ou a senha estão errados
         */
        bool check(const std::string& uname, const std::string& pass) const;

        /**
         * @brief Exibe o painel do respectivo tipo de usuário
         * 
         * @return true 
         * @return false 
         */
        virtual bool painel() = 0;
};

#endif