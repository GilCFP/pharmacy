#include <iostream>
#include "Medicamento.hpp"

Medicamento::Medicamento(string nome, float preco, int quantidade) : Produto(nome, quantidade, preco)
{
    this->quantidade = quantidade;
}

string Medicamento::getNome()
{
    return Produto::getDescricaoProduto();
}