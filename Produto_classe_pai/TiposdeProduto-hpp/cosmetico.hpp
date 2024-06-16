#ifndef COSMETICO
#define COSMETICO

#include "../Produto/produto.hpp"

#include <string>
using std::string;

class Cosmetico : public Produto
{
    public:
        string lote;
        Cosmetico(string lote, string descricaoprod, int quantidadeprod, float preco);
        virtual string InformacoesProduto();
        virtual ~Cosmetico();
};

#endif