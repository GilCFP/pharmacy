#include "..\projeto_farmacia\Produto_classe\pharmacy\Cosmeticos-hpp\Shampoo.hpp"

Shampoo::Shampoo(string lote, string descricaoprod, int quantidadeprod, float preco):
 Cosmetico(lote,descricaoprod, quantidadeprod,preco)
{

}

string Shampoo::InformacoesProduto()
{
    return "Quantidade: " + Produto::getDescricaoProduto() + "\t" + "Descricao: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Lote: " + lote + "\t" + "Preco: " + std::to_string(preco);
}