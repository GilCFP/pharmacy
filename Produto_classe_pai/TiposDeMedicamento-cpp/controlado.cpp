#include "../tiposDeMedicamento-hpp/controlado.hpp"
#include <string>
#include <bits/stdc++.h>
#include <iostream>

using std::string;

Controlado::Controlado(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    if(Controlado::precisaDeReceita == false){

        throw "Não permitido: valor inválido";

    }

}

string Controlado::InformacoesProduto(){

    std::ostringstream saida;
    saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();

}