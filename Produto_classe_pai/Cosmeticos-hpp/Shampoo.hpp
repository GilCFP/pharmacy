#ifndef SHAMPOO
#define SHAMPOO

#include "../TiposdeProduto-hpp/cosmetico.hpp"

class Shampoo : public Cosmetico
{
    public:
        Shampoo(string lote, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif