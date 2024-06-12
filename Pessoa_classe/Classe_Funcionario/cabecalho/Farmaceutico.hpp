#ifndef FARMACEUTICO
#define FARMACEUTICO

#include "Funcionario.hpp"
#include "../../Cliente_classe/Cliente.hpp"
#include "../../../Receita_classe/Receita.hpp"
#include "../../../Medicamento_classe/medicamento.hpp"

class Farmaceutico : public Funcionario
{
    public:
        Farmaceutico(string nome, int idade, int codigo) : Funcionario(nome, idade, codigo) {};
        bool verificarReceita(Receita receita, Medicamento medicamento);
};
#endif