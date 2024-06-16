#ifndef PASTILHA
#define PASTILHA
#include "../TiposdeProduto-hpp/alimento.hpp"

class Pastilha : public Alimento
{
    public:
        Pastilha(int calorias, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif