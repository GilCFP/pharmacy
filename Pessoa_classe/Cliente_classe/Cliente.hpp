#ifndef CLIENTE
#define CLIENTE

#include<iostream>
#include<string>
#include<vector>
#include"../Receita_classe/Receita.hpp"
#include"../Pessoa.hpp"
#include"../Produto_classe_pai/Produto/produto.hpp"

using std::string;
using std::vector;

class Cliente : public Pessoa
{
private:

   vector<Receita> receitas;
   vector<Produto> carrinho;


public:
    Cliente(string nome, int idade);
    void addCompraCarrinho(Produto produto);
    void addReceita(Receita Receita);
    void verReceitas();
    void verCompras();
    string pegarNome();
    int pegarIdade();
};


#endif