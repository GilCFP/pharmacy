#ifndef SHAMPOO
#define SHAMPOO

#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\cosmetico.hpp"

class Shampoo : public Cosmetico
{
    public:
        Shampoo(string lote, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif