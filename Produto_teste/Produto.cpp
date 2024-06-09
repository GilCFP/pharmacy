#include<iostream>
#include<string>
#include"Produto.hpp"

using std::string;

Produto::Produto(string nome, float preco){
    this->nome = nome;
    this->preco = preco;
}
string Produto::getNome(){
    
    return nome;
}

