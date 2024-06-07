#ifndef PRODUTO
#define PRODUTO

#include <string>
using std::string;

class Produto
{
    private:
        string descricaoprod;
        int quantidadeprod;

    public:
        float preco;
        Produto(string descricaoprod, int quantidadeprod, float preco);
        string getDescricaoProduto();
        int getQuantidadeProduto();
        virtual string InformacoesProduto()=0;
};

#endif