#include "../medicamentos-hpp/amicacina.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "amicacina.hpp"

using std::string;
using std::cout;

Amicacina::Amicacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Amicacina::InformacoesProduto(){

    cout << "Amicacina eh um ANTIBIOTICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Amicacina::preco;
    
}
