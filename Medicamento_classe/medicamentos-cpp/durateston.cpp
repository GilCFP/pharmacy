#include "../medicamentos-hpp/durateston.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "durateston.hpp"

using std::string;

Durateston::Durateston(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

string Durateston::InformacoesProduto(){

    std::cout << "Durateston eh um ANABOLIZANTE." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Durateston::preco;
    
}
