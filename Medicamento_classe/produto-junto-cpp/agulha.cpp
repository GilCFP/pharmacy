#include "../produto-junto-hpp/agulha.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Agulha::Agulha(string descricaoprod, int quantidadeprod, float preco):
Produto(descricaoprod, quantidadeprod, preco)
{


}

string Agulha::InformacoesProduto() {

    std::cout << "Agulha para injeção do medicamento." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Agulha::preco;

}
