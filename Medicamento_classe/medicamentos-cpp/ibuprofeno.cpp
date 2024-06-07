#include "../medicamentos-hpp/ibuprofeno.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Ibuprofeno::Ibuprofeno(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Ibuprofeno(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Ibuprofeno::InformacoesProduto(){

    std::cout << "Ibuprofeno eh um ANALGESICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Ibuprofeno::preco;
    
}