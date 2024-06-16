#include<iostream>
#include<string>
#include<vector>
#include"Cliente.hpp"


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

bool Cliente::addCompraCarrinho(Item* item)
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

bool Cliente::removeCompraCarrinho(Item* item, int remove)
{
    try
    {
        for (auto &i : carrinho)
        {
            if (i->produto == item->produto)
            {
                if(remove > item->total)
                {
                    return false;
                }else
                    item->total -= remove;
                    return true;
                
            }
        }
        return false;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Erro:" << e.what() << std::endl;
        return false;
    }
    
}


void Cliente::verCompras()
{
    for(auto &item : carrinho)
    {
        cout << item->produto->getDescricaoProduto() << ": " <<item->getTotal()<< endl;
        
    }
}

void Cliente::verReceitas()
{
    for(auto& receita : receitas)
    {
        cout << receita.pegarDescricao() << endl;
    }
}

