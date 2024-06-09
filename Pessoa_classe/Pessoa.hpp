#ifndef PESSOA
#define PESSOA

#include<iostream>
#include<string>

using std::string;

class Pessoa
{
private:
    int idade;
    string nome;
public:
    Pessoa(string nome, int idade);
    virtual string pegarNome();
    virtual int pegarIdade();
};

#endif 
