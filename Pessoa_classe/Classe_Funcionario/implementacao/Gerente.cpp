#include "../cabecalho/Gerente.hpp"

Gerente::Gerente(string nome, int idade, int codigo) : Farmaceutico (nome, idade, codigo), Vendedor(nome, idade, codigo) {}

Gerente::~Gerente() {


}
