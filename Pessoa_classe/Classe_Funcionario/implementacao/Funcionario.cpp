#include "../cabecalho/Funcionario.hpp"
#include <iostream>

using namespace std;

Funcionario::Funcionario(string nome, int idade, int codigo) : Pessoa(nome, idade)
{
    this->codigo = codigo;
}

int Funcionario::getCodigo()
{
    return this->codigo;
}

Funcionario::~Funcionario() {


}