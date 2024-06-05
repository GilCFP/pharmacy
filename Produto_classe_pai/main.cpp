#include <iostream>
#include <string>
#include <vector>

#include "Alimentos-hpp\BalaFini.hpp"
#include "Alimentos-hpp\PastilhaTosse.hpp"
#include "Cosmeticos-hpp\Condicionador.hpp"
#include "Cosmeticos-hpp\Shampoo.hpp"
#include "Produto\produto.hpp"
#include "TiposdeProduto-hpp\alimento.hpp"
#include "TiposdeProduto-hpp\cosmetico.hpp"


using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
   Alimento* pastilha = new Pastilha(50,"Pa Morango", 10, 15);
   Alimento* pastilha2 = new Pastilha(52,"Pa2 Morango", 12, 12);
   Alimento* balafini1 = new BalaFini(80,"BF Morango", 70, 28);
   Cosmetico* clearman = new Condicionador("A01523","COND cabelos", 25, 17.5);
   Cosmetico* condiciona_cacheados= new Condicionador("A01528","COND CAacheados", 22, 19.99);
   Cosmetico* shampoozao= new Shampoo("S01523","Shampoo ensaboado", 13, 15.85);
   
   cout << pastilha->Produto::getPrecoProduto() << endl;
   cout << pastilha->Produto::getQuantidadeProduto() << endl;
   cout << pastilha->Produto::getDescricaoProduto() << endl;
   cout << pastilha->InformacoesProduto() << endl;

   cout << "------------ TESTE 2 ------------"<< endl;

   cout << balafini1 ->Produto::getPrecoProduto() << endl;
   cout << balafini1 ->Produto::getQuantidadeProduto() << endl;
   cout << balafini1 ->Produto::getDescricaoProduto() << endl;
   cout << balafini1 ->InformacoesProduto() << endl;

    cout << "------------ TESTE 3 ------------" << endl;
   
  
   cout << clearman->Produto::getPrecoProduto() << endl;
   cout << clearman->Produto::getQuantidadeProduto() << endl;
   cout << clearman->Produto::getDescricaoProduto() << endl;

   cout << "------------ TESTE 4 ------------" << endl;

   cout << condiciona_cacheados->Produto::getPrecoProduto() << endl;
   cout << condiciona_cacheados ->Produto::getQuantidadeProduto() << endl;
   cout << condiciona_cacheados->Produto::getDescricaoProduto() << endl;
   cout << condiciona_cacheados ->InformacoesProduto() << endl;

    cout << "------------ TESTE POLIMORFISMO ALIMENTOS ------------" << endl;
   vector<Alimento*> alimentos;
   alimentos.push_back(pastilha2);
   alimentos.push_back(balafini1);
   for(auto a : alimentos)
   {
      cout << a->InformacoesProduto() << endl;
   }

  cout << "------------ TESTE POLIMORFISMO COSMETICOS ------------" << endl;
   vector<Cosmetico*> cosmeticos;
   cosmeticos.push_back(clearman);
   cosmeticos.push_back(shampoozao);
   for(auto c : cosmeticos)
   {
      cout << c->InformacoesProduto() << endl;
   }


}