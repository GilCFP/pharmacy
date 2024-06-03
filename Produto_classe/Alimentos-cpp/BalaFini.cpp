#include "..\projeto_farmacia\Produto_classe\pharmacy\Alimentos-hpp\BalaFini.hpp"

BalaFini::BalaFini(int calorias, string descricaoprod, int quantidadeprod, float preco):
  Alimento(calorias,descricaoprod,quantidadeprod, preco)
{

}

string BalaFini::InformacoesProduto()
{
    return "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Calorias: " + std::to_string(calorias) + "\t" + "Preco: " + std::to_string(preco);
}