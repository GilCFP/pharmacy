#include "Sistema.hpp"
#include <iostream>
#include <exception>

using std::vector;

Sistema::Sistema(Vendedor vendedor, Farmaceutico farmaceutico, Gerente gerente)
{
  this->vendedor = vendedor;
  this->farmaceutico = farmaceutico;
  this->gerente = gerente;
}

bool Sistema::adicionarAoEstoque(Item *item)
{
  try
  {
    for (auto &i : estoque)
    {
      if (i->produto == item->produto)
      {
        i->total += item->total;
        return true;
      }
    }
    this->estoque.push_back(item);
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::removerDoEstoque(Item *item)
{
  try
  {
    for (auto &i : estoque)
    {
      if (i->produto == item->produto && item->total < i->total)
      {
        i->total -= item->total;
        return true;
      }
    }
    return false;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::adicionarAoCarrinho(Item *item, Cliente *cliente){
  
}

int Sistema::disponibilidadeItem(Item *item)
{
  for (auto &i : estoque)
  {
    if (i->produto == item->produto)
    {
      return i->total;
    }
  }
  return 0;
}