#include "..\Produto\produto.hpp"
#include <cmath>
using std::round;

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

float Produto::getPrecoProduto()
{
    float valor = this->preco;
    return round(valor*100)/100;
}

string Produto::InformacoesProduto(){
    return this->descricaoprod;
}