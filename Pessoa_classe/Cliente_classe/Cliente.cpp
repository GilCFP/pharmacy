#include <iostream>
#include <string>
#include <vector>
#include "Cliente.hpp"

using std::cout;
using std::endl;
using std::string;

Cliente::Cliente(string nome, int idade) : Pessoa(nome, idade)
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

bool Cliente::addCompraCarrinho(Item *item)
{
    try
    {
        for (auto &i : carrinho)
        {
            if (i->produto == item->produto)
            {
                i->total += item->total;
                return true;
            }
        }
        this->carrinho.push_back(item);
        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro:" << e.what() << std::endl;
        return false;
    }
}

bool Cliente::removeCompraCarrinho(int index, int quantidade)
{
    try
    {
        // Impossivel realizar operação
        if (carrinho[index]->total < quantidade)
        {
            return false;
        }

        // Deleta o item do carrinho
        if (carrinho[index]->total = quantidade)
        {
            delete carrinho[index];
            carrinho.erase(carrinho.begin() + index);
            return true;
        }

        // Decrementa o total de item
        carrinho[index]->total = carrinho[index]->total - quantidade;
        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro:" << e.what() << std::endl;
        return false;
    }
}

void Cliente::verCompras()
{
    cout << "Esse é o seu carrinho "<< this->pegarNome()<< " :\n"<<endl;
    for (auto &item : carrinho)
    {
        cout << item->produto->getDescricaoProduto() << ": (" <<item->total << ") R$: " << item->getTotal() << endl;
    }
}

void Cliente::verReceitas()
{
    for (auto &receita : receitas)
    {
        cout << receita.pegarDescricao() << endl;
    }
}

int Cliente::indexItem(string descricao)
{
    int index = 0;
    for (auto &i : carrinho)
    {
        if (i->produto->getDescricaoProduto() == descricao)
        {
            return index;
        }
        index++;
    }
    return -1;
}