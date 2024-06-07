#include "..\projeto_farmacia\Produto_classe\pharmacy\Cosmeticos-hpp\Condicionador.hpp"

Condicionador::Condicionador(string lote, string descricaoprod, int quantidadeprod, float preco):
 Cosmetico(lote,descricaoprod, quantidadeprod,preco)
{

}

string Condicionador:: InformacoesProduto()
{
   return "Quantidade: " + Produto::getDescricaoProduto() + "\t" + "Descricao: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Lote: " + lote;
}