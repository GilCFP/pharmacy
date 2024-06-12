#include "../tiposDeMedicamento-hpp/analgesico.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Analgesico::Analgesico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}

string Analgesico::InformacoesProduto(){

    std::ostringstream saida;
    saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();

}

