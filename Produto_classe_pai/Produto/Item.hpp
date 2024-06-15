#include "produto.hpp"

class Item{
  public:
    Produto* produto;
    int total;
    Item(Produto* produto, int total);
    ~Item();
};