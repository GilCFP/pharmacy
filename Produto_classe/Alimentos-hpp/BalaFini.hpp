#ifndef BALAFINI
#define BALAFINI
#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\alimento.hpp"

class BalaFini : public Alimento
{
    public:
        BalaFini(int calorias, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif