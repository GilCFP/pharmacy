#include "produto.hpp"

Produto::Produto(string descricaoprod, int quantidadeprod, float preco):
   descricaoprod(descricaoprod), quantidadeprod(quantidadeprod), preco(preco)
{

}


string Produto::getDescricaoProduto()
{
    return this->descricaoprod;
}

int Produto::getQuantidadeProduto()
{
    return this->quantidadeprod;
}