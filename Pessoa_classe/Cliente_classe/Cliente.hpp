#ifndef CLIENTE
#define CLIENTE

#include<iostream>
#include<string>
#include<vector>
#include"../Receita_classe/Receita.hpp"
#include"../Pessoa.hpp"
#include"Item.hpp"


using std::string;
using std::vector;

class Cliente : public Pessoa
{
public:

   vector<Receita> receitas;
   vector<Item*> carrinho;


public:
    Cliente(string nome, int idade);
    bool addCompraCarrinho(Item* item);
    bool removeCompraCarrinho(Item* item);
    void addReceita(Receita Receita);
    void verReceitas();
    void verCompras();
    string pegarNome();
    int pegarIdade();
};


#endif