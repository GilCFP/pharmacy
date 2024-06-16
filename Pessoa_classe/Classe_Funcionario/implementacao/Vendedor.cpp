#include "../cabecalho/Vendedor.hpp"
#include <vector>

Vendedor::Vendedor(string nome, int idade, int codigo) : Funcionario(nome, idade, codigo) {}

float Vendedor::cobrar(vector<Item*> carrinho)
{
    float precoTotal = 0;
    for (auto &item : carrinho){
        precoTotal += item->getTotal();
    }
    return precoTotal;
}