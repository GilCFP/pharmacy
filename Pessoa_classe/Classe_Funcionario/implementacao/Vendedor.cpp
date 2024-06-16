#include "../cabecalho/Vendedor.hpp"
#include <vector>

float Vendedor::cobrar(vector<Item> carrinho)
{
    float precoTotal = 0;
    for(int i = 0; i < carrinho.size(); i++)
    {
        precoTotal += carrinho[i].*produto->getPreco() * carrinho[i].getQuantidade();
    }
    return precoTotal;
}