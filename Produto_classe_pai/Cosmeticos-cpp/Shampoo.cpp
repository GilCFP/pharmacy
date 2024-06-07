#include "..\Cosmeticos-hpp\Shampoo.hpp"

Shampoo::Shampoo(string lote, string descricaoprod, int quantidadeprod, float preco):
 Cosmetico(lote,descricaoprod, quantidadeprod,preco)
{

}

string Shampoo::InformacoesProduto()
{
 ostringstream saida;
 saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Lote: " + lote + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
 return saida.str();
} 