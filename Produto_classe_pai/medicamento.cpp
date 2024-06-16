#include "medicamento.hpp"
#include <string>

using std::string;

Medicamento::Medicamento(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Produto(descricaoprod, quantidadeprod, preco)
{

    this->prescricao = prescricao;
    this->precisaDeReceita = precisaDeReceita;

}

Medicamento::~Medicamento(){


}

string Medicamento::getPrescricao() {

    return this->prescricao;

}
