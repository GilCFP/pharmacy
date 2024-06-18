#include "../TiposdeProduto-hpp/alimento.hpp"

Alimento::Alimento(int calorias, string descricaoprod, int quantidadeprod, float preco) : Produto(descricaoprod, quantidadeprod, preco)
{
  this->calorias = calorias;
}

string Alimento::InformacoesProduto()
{
  ostringstream saida;
  saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t"+ "Calorias: " + std::to_string(calorias) + "\t" + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
  return saida.str();
}
Alimento::~Alimento()
{
}
