#include "Pessoa.hpp"
 
Pessoa::Pessoa(string nome, int idade)
{
 this->nome = nome;
 this->idade = idade;
}
string Pessoa::pegarNome()
{
    return this->nome;
}
int Pessoa::pegarIdade()
{
    return this->idade;
}