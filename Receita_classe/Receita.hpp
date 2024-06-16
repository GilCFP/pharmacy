#ifndef RECEITA
#define RECEITA

#include<iostream>
#include<string>
#include"../Produto_classe_pai/medicamento.hpp"

using std::string;

class Receita
{
private:
   string descricao; // Nome do Remedio contido na receita 
   int quantidade; // Quantidade que precisa ser tomada 
   bool validade; // Receita esta dentro da validade 
   Medicamento* ponteiro; //Ponteiro para o remedio

public:
    Receita(string descricao, int quantidade, bool validade);
    void associarMed(Medicamento* obj); //Funcao que associa um medicamento já criado a uma receita
    string getNomeRemedio(); //Pega o nome do remedio associado a receita
    string pegarDescricao();
    string pegarValidade();
    string pegarQuantidade();
};




#endif