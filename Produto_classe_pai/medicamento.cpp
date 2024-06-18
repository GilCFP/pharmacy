#include "medicamento.hpp"
#include <string>

using std::string;

Medicamento::Medicamento(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Produto(descricaoprod, precisaDeReceita, quantidadeprod, preco)
{

    this->prescricao = prescricao;

}

Medicamento::~Medicamento(){


}

string Medicamento::getPrescricao() {

    return this->prescricao;

}
