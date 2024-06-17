#include "../Produto/produto.hpp"
#include <cmath>
using std::round;

Produto::Produto()
{
    
}

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
 ostringstream saida;
 saida << "Descricao: " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
 return saida.str();
}

Produto::~Produto()
{
    
}
