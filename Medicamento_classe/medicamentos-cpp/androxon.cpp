#include "../medicamentos-hpp/androxon.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "androxon.hpp"


using std::string;

Androxon::Androxon(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

    
}


string Androxon::InformacoesProduto(){

    std::cout << "Androxon eh um ANABOLIZANTE." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Androxon::preco;
    
}
