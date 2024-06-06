#include "../medicamentos-hpp/ofloxacina.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Ofloxacina::Ofloxacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Ofloxacina::InformacoesProduto(){

    std::cout << "Ofloxacina eh um ANTIBIOTICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Ofloxacina::preco;
    
}
