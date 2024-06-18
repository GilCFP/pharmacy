#include "../tiposDeMedicamento-hpp/antibiotico.hpp"
#include <string>
#include <bits/stdc++.h>
#include <iostream>

using std::string;
using std::cout;

Antibiotico::Antibiotico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    this->precisaDeReceita = precisaDeReceita;
}

Antibiotico::~Antibiotico(){

    cout << "Destruindo Antibiotico: " << Produto::getDescricaoProduto();

}

string Antibiotico::InformacoesProduto(){

    std::ostringstream saida;
    saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();

}
