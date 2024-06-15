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

bool Sistema::adicionarAoCarrinho(Item *item, Cliente *cliente)
{
  try
  {
    return cliente->addCompraCarrinho(item);
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::removerDoCarrinho(Item *item, Cliente *cliente)
{
  try
  {
    return cliente->remCompraCarrinho(item);
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
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

bool Sistema::olharCarrinho(Cliente *cliente)
{
  try
  {
    cliente->verCompras();
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}
bool finalizarCompra(Cliente* cliente, Vendedor* vendedor){
  try{
    float valortotal = vendedor->cobrar(cliente->carrinho);
    std::cout << "O valor total da sua compra é de: " << valortotal << " segue abaixo o código do pix para pagamento" << std::endl;
    std::cout << "00020126360014BR.GOV.BCB.PIX0114+55319892138465204000053039865802BR5903Gil6002BH62070503***63040324" << std::endl;
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}