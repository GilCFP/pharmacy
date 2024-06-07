#include "../medicamentos-hpp/penicilina.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "penicilina.hpp"

using std::string;

Penicilina::Penicilina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Penicilina::InformacoesProduto(){

    std::cout << "Penicilina eh um ANTIBIOTICO." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Penicilina::preco;
    
}
