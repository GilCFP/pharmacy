#include "../tiposDeMedicamento-hpp/controlado.hpp"
#include <string>
#include <bits/stdc++.h>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Controlado::Controlado(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{   
    try{
        if(Controlado::precisaDeReceita == false){

            throw "Nao permitido: valor invalido.";

        }
    }  catch (string e) {

        cout << e << endl;

    }

}

Controlado::~Controlado(){

    cout << "Destruindo Controlado: " << Produto::getDescricaoProduto();

}

string Controlado::InformacoesProduto(){

    std::ostringstream saida;
    saida << "Descricao:  " + Produto::getDescricaoProduto() + "\t" + "Quantidade: " + std::to_string(Produto::getQuantidadeProduto()) + "\t" + "\t" +  "Preco: " << std::fixed << std::setprecision(2) << Produto::getPrecoProduto();
    return saida.str();

}