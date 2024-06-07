#ifndef CONDICIONADOR
#define CONDICIONADOR

#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\cosmetico.hpp"

class Condicionador : public Cosmetico
{
    public:
        Condicionador(string lote, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif