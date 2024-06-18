#ifndef VENDEDOR
#define VENDEDOR

#include "Funcionario.hpp"
#include "../../../Produto_classe_pai/Produto/produto.hpp"
#include "../../Cliente_classe/Item.hpp"

class Vendedor : public Funcionario
{
    public:
        Vendedor(string nome, int idade, int codigo);
        float cobrar(vector<Item*> carrinho);
        ~Vendedor();
};
#endif