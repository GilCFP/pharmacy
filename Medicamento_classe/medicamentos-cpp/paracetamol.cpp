#include "../medicamentos-hpp/paracetamol.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Paracetamol::Paracetamol(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Analgesico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Paracetamol::InformacoesProduto(){

    std::cout << "Paracetamol eh um ANALGESICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Paracetamol::preco;
    
}
