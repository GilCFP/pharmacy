#include "../cabecalho/Vendedor.hpp"
#include <vector>

float Vendedor::cobrar(vector<Item*> carrinho)
{
    float precoTotal = 0;
    for (auto &item : carrinho){
        precoTotal += item->getTotal();
    }
    return precoTotal;
}