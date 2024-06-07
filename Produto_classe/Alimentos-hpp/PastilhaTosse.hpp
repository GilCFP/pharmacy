#ifndef PASTILHA
#define PASTILHA
#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\alimento.hpp"

class Pastilha : public Alimento
{
    public:
        Pastilha(int calorias, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif