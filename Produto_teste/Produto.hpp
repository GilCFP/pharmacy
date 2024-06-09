#ifndef PRODUTO
#define PRODUTO

#include<iostream>
#include<string>
using std::string;

class Produto
{
private:
    float preco;
    string nome;
public:
    Produto(string nome, float preco);
    virtual string getNome();
};


#endif