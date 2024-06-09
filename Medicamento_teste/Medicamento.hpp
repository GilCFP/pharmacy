#ifndef MEDICAMENTO
#define MEDICAMENTO

#include<iostream>
#include<string>
#include<vector>
#include"Produto.hpp"

using std::string;
using std::vector;

class Medicamento : public Produto
{
private:
    int quantidade;
    
public:
    Medicamento(string nome, float preco, int quantidade);
    string getNome(); 
};

#endif