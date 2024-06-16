#ifndef VENDEDOR
#define VENDEDOR

#include "Funcionario.hpp"
#include "../../../Produto_classe_pai/Produto/produto.hpp"

class Vendedor : public Funcionario
{
    public:
        Vendedor();
        float cobrar(vector<Item> carrinho);
};
#endif