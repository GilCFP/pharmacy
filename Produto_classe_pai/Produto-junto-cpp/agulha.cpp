#include "../produto-junto-hpp/agulha.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;
using std::cout;

Agulha::Agulha():
Produto()
{

}

Agulha::Agulha(string descricaoprod, int quantidadeprod, float preco):
Produto(descricaoprod, quantidadeprod, preco)
{

}

Agulha::~Agulha(){

    cout << "Destruindo Agulha: " << Produto::getDescricaoProduto();

}

string Agulha::InformacoesProduto() {
    ostringstream saida;
    saida << "Agulha para injeção do medicamento." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();
}
