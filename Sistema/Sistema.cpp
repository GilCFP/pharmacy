#include "Sistema.hpp"

Sistema:Sistema(Vendedor vendedor, Farmaceutico farmaceutico, Gerente gerente){
  this->vendedor = vendedor;
  this->farmaceutico = farmaceutico; 
  this->gerente = gerente;
}

Sistema:adicionarAoEstoque(Produto produto){
  this->estoque.push_back(produto);
}

Sistema:
