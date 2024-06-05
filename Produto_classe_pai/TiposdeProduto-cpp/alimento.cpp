#include "..\TiposdeProduto-hpp\alimento.hpp"

Alimento::Alimento(int calorias, string descricaoprod, int quantidadeprod, float preco):
  Produto(descricaoprod, quantidadeprod, preco)
  {
    this->calorias= calorias;
  }

  Alimento::~Alimento()
  {
    
  }
