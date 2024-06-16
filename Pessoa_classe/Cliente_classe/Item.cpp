#include "Item.hpp"

Item::Item(Produto* produto, int total){
  this-> produto = produto;
  this-> total = total;
}
Item::~Item()
{

}

int Item::getTotal()
{
  return this->produto->getPrecoProduto() * this->total;
}