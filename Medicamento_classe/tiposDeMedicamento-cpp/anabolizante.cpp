#include "../tiposDeMedicamento-hpp/anabolizante.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Anabolizante::Anabolizante(string prescricao, bool precisaDeReceita = true, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}

string Anabolizante::InformacoesProduto() {

    return "ATENÇÃO: Venda vedada para menores de 18 anos. \n Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Medicamento::getQuantidadeProduto()) + "\t" + "Prescricao " + this->prescricao + "\t" + "Preco: " + std::to_string(this->preco);

}
