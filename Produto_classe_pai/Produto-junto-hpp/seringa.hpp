#ifndef SERINGA
#define SERINGA

#include "../Produto/produto.hpp"

class Seringa : public Produto {

    public:
        Seringa(string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;

};

#endif