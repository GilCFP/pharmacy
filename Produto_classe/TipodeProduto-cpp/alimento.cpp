#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\alimento.hpp"

Alimento::Alimento(int calorias, string descricaoprod, int quantidadeprod, float preco):
  Produto(descricaoprod, quantidadeprod, preco)
  {
    this->calorias= calorias;
  }

  