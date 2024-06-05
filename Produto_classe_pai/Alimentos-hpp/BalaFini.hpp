#ifndef BALAFINI
#define BALAFINI
#include "..\TiposdeProduto-hpp\alimento.hpp"

class BalaFini : public Alimento
{
    public:
        BalaFini(int calorias, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif