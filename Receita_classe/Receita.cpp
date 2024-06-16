#include<iostream>
#include<string>
#include "Receita.hpp"


using std::string;

Receita::Receita(string descricao, int quantidade, bool validade)
{
this->descricao = descricao;
this->quantidade = quantidade;
this->validade = validade;
ponteiro = nullptr;

}
void Receita::associarMed(Medicamento* obj)
{
    ponteiro = obj;
}

string Receita::getNomeRemedio()
{
    if (ponteiro) {
           return ponteiro->getDescricaoProduto();
        } else {
            return "A receita nao esta associada a nenhum medicamento."; 
        }
        
}

string Receita::pegarDescricao()
{
    return descricao;
}

string Receita::pegarValidade()
{
    if(validade == true)
    {
        return "Receita na validade";
    }else{
        return "Receita fora da validade";
    }
}
string Receita::pegarQuantidade()
{
    return "Tomar por dia " + quantidade; 
}

