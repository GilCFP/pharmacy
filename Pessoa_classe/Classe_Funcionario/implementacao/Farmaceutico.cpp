#include "../cabecalho/Farmaceutico.hpp"
#include <iostream>

using namespace std;

bool Farmaceutico::verificarReceita(vector<Receita> receitas, Produto *medicamento)
{
    // for (int i = 0; i < receitas.size(); i++)
    // {
    //     if (receitas[i].pegarValidade() == "Receita fora da validade")
    //     {
    //         return false;
    //     }
    // }

    string descMedicamento = medicamento->getDescricaoProduto();
    for (Receita receita : receitas)
    {
        if(receita.getNomeRemedio()== descMedicamento){
            return true;
        }
    }

    return false;
}

Farmaceutico::~Farmaceutico() {


}