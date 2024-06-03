#include "../tiposDeMedicamento-hpp/controlado.hpp"
#include <string>

using std::string;

Controlado::Controlado(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}

string Controlado::InformacoesProduto() {

    return "ATENÇÃO: Manter protegido de crianças. \n Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Medicamento::getQuantidadeProduto()) + "\t" + "Prescricao " + this->prescricao + "\t" + "Preco: " + std::to_string(this->preco);

}
