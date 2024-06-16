#ifndef AGULHA
#define AGULHA

#include "../Produto/produto.hpp"

class Agulha : public Produto{

    public:
        Agulha();
        Agulha(string descricaoprod, int quantidadeprod, float preco);
        ~Agulha();
        string InformacoesProduto() override;

};

#endif