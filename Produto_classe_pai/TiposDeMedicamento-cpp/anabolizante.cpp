#include "../tiposDeMedicamento-hpp/anabolizante.hpp"
#include "../produto-junto-hpp/agulha.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>


using std::string;
using std::cout;
using std::endl;

Anabolizante::Anabolizante(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco, Agulha *agulha):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

    if(agulha->getQuantidadeProduto() != quantidadeprod){

        throw "Não permitido: Valores diferentes.";

    }
    this->agulha = agulha;

}

string Anabolizante::InformacoesProduto(){

    std::ostringstream saida;
    saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();

}
