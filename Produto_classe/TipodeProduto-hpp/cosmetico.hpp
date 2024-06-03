#ifndef COSMETICO
#define COSMETICO

#include "..\projeto_farmacia\Produto_classe\pharmacy\produto\produto.hpp"

#include <string>
using std::string;

class Cosmetico : public Produto
{
    public:
        string lote;
        Cosmetico(string lote, string descricaoprod, int quantidadeprod, float preco);
        virtual string InformacoesProduto()=0;
};

#endif