#include "../medicamentos-hpp/dipirona.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "dipirona.hpp"

using std::string;

Dipirona::Dipirona(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Analgesico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Dipirona::InformacoesProduto(){

    std::cout << "Dipirona eh um ANALGESICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Dipirona::preco;
    
}
