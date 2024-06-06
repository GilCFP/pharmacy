#include "../medicamentos-hpp/boldenona.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Boldenona::Boldenona(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Boldenona::InformacoesProduto(){

    std::cout << "Boldenona eh um ANABOLIZANTE." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Boldenona::preco;
    
}