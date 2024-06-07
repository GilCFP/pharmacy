#include "..\projeto_farmacia\Produto_classe\pharmacy\Alimentos-hpp\PastilhaTosse.hpp"

Pastilha::Pastilha(int calorias, string descricaoprod, int quantidadeprod, float preco):
  Alimento(calorias,descricaoprod,quantidadeprod, preco)
{

}

string Pastilha::InformacoesProduto()
{
    return "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Calorias: " + std::to_string(calorias) + "\t" + "Preco: " + std::to_string(preco);
}