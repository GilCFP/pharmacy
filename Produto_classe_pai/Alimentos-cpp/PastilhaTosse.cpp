#include "..\Alimentos-hpp\PastilhaTosse.hpp"

Pastilha::Pastilha(int calorias, string descricaoprod, int quantidadeprod, float preco):
  Alimento(calorias,descricaoprod,quantidadeprod, preco)
{

}

string Pastilha::InformacoesProduto()
{
 ostringstream saida;
 saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Calorias: " + std::to_string(calorias) + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
 return saida.str();
}