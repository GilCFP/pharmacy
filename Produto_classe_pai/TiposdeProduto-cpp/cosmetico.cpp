#include "..\TiposdeProduto-hpp\cosmetico.hpp"



Cosmetico::Cosmetico(string lote, string descricaoprod, int quantidadeprod, float preco):
  Produto(descricaoprod, quantidadeprod, preco)
  {
    this->lote= lote;
  }

  Cosmetico::~Cosmetico()
  {
    
  }

  