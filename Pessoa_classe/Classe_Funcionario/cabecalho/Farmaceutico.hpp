#ifndef FARMACEUTICO
#define FARMACEUTICO

#include "Funcionario.hpp"
#include "../../Cliente_classe/Cliente.hpp"
#include "../../../Receita_classe/Receita.hpp"
#include "../../../Produto_classe_pai/medicamento.hpp"
#include <vector>

class Farmaceutico : public Funcionario
{
    public:
        Farmaceutico(string nome, int idade, int codigo) : Funcionario(nome, idade, codigo) {};
        bool verificarReceita(vector<Receita> receitas, vector<Produto> medicamentos);
};
#endif