#include<iostream>
#include<string>
#include<vector>
#include"Cliente.hpp"
#include"Pessoa.hpp"
#include"Produto.hpp"

using std::string;
using std::cout;
using std::endl;

Cliente::Cliente(string nome, int idade):Pessoa(nome, idade)
{
    
}

string Cliente::pegarNome()
{
    return Pessoa::pegarNome();
}

int Cliente::pegarIdade()
{
    return Pessoa::pegarIdade();
}

void Cliente::addReceita(Receita receita)
{
    this->receitas.push_back(receita);
}

void Cliente::addCompraCarrinho(Produto produto)
{
    this->carrinho.push_back(produto);
}

void Cliente::verCompras()
{
    for(auto& produto : carrinho)
    {
        cout << produto.getNome() << endl;
    }
}

void Cliente::verReceitas()
{
    for(auto& receita : receitas)
    {
        cout << receita.pegarDescricao() << endl;
    }
}

