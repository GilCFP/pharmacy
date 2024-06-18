#include "../TiposdeProduto-hpp/cosmetico.hpp"

Cosmetico::Cosmetico(string lote, string descricaoprod, int quantidadeprod, float preco) : Produto(descricaoprod, quantidadeprod, preco)
{
  this->lote = lote;
}

Cosmetico::~Cosmetico()
{
}

string Cosmetico::InformacoesProduto()
{
  ostringstream saida;
  saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" + "Lote: " + lote + "\t" + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
  return saida.str();
}