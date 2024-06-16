#ifndef FUNCIONARIO
#define FUNCIONARIO

#include "../../Pessoa.hpp"

class Funcionario : public Pessoa
{
    private:
        int codigo;

    public:
        Funcionario(string nome, int idade, int codigo);
        int getCodigo();
};
#endif