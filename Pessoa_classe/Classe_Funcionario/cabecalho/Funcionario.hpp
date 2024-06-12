#ifndef FUNCIONARIO
#define FUNCIONARIO

#include "../../Pessoa.hpp"

class Funcionario : public Pessoa
{
    private:
        int codigo;

    public:
        Funcionario(string nome, int idade, int codigo) : Pessoa(nome, idade) {};
        int getCodigo();
};
#endif