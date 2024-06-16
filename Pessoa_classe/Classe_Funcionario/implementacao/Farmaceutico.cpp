#include "../cabecalho/Farmaceutico.hpp"
#include <iostream>

using namespace std;

bool Farmaceutico::verificarReceita(vector<Receita> receitas, vector<Medicamento> medicamentos)
{
    for(int i = 0; i < receitas.size(); i++)
    {
        if(receitas[i].pegarValidade() == "Receita fora da validade") { return false; }
    }

    string descMedicamento;
    string medicamentoReceita;
    for(int i = 0; i < receitas.size(); i++)
    {
        descMedicamento = medicamentos[i].getNome();
        int receitaValida = 0;
        for(int j = 0; j < receitas.size(); j++)
        {
            medicamentoReceita = receitas[j].getNomeRemedio();
            if(descMedicamento == medicamentoReceita) { receitaValida++; }
        }
        if(receitaValida != 0 && receitaValida != 1){ throw  }
        if(receitaValida == 1) { cout << "Receita de " << descMedicamento << " validada." << endl; }
        if(receitaValida == 0) { cout << "Receita de " << descMedicamento << " não validada." << endl; }
    }

    return true;
}