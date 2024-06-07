#ifndef AGULHA
#define AGULHA

#include "../../Produto_classe/Produto/produto.hpp"

class Agulha : public Produto{

    public:
        Agulha(string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;

};

#endif