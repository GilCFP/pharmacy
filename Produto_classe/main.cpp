#include <iostream>
#include <string>

#include "..\projeto_farmacia\Produto_classe\pharmacy\Alimentos-hpp\BalaFini.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\Alimentos-hpp\PastilhaTosse.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\Cosmeticos-hpp\Condicionador.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\Cosmeticos-hpp\Shampoo.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\produto\produto.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\alimento.hpp"
#include "..\projeto_farmacia\Produto_classe\pharmacy\TipodeProduto-hpp\cosmetico.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
   Alimento* pastilha = new Pastilha(50,"Bala Morango", 10, 15);
   cout << pastilha->InformacoesProduto() << endl;
}
