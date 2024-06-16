#ifndef ITEM
#define ITEM

#include "../../Produto_classe_pai/Produto/produto.hpp"

class Item{
  public:
    Produto* produto;
    int total;
    Item(Produto* produto, int total);
    int getTotal();
    ~Item();
};

#endif