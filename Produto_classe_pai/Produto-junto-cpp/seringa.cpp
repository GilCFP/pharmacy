#include "../produto-junto-hpp/seringa.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;

Seringa::Seringa()
{
    
}

Seringa::Seringa(string descricaoprod, int quantidadeprod, float preco):
Produto(descricaoprod, quantidadeprod, preco)
{


}

string Seringa::InformacoesProduto() {

    std::cout << "Seringa para injeção do medicamento." << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto;

}
