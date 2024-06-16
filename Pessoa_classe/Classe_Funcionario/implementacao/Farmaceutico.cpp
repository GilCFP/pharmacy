#include "../cabecalho/Farmaceutico.hpp"
#include <iostream>

using namespace std;

bool Farmaceutico::verificarReceita(vector<Receita> receitas, vector<Medicamento> medicamentos)
{
    for (int i = 0; i < receitas.size(); i++)
    {
        if (receitas[i].pegarValidade() == "Receita fora da validade")
        {
            return false;
        }
    }

    string descMedicamento;
    string medicamentoReceita;
    for (int i = 0; i < receitas.size(); i++)
    {
        descMedicamento = medicamentos[i].getDescricaoProduto();
        int receitaValida = 0;
        for (int j = 0; j < receitas.size(); j++)
        {
            medicamentoReceita = receitas[j].getNomeRemedio();
            if (descMedicamento == medicamentoReceita)
            {
                receitaValida++;
            }
        }
        try
        {
            if (receitaValida == 1)
            {
                cout << "Receita de " << descMedicamento << " validada." << endl;
            }
            else if (receitaValida == 0)
            {
                cout << "Receita de " << descMedicamento << " não validada." << endl;
            }
            else
            {
                throw "Receita validada mais de uma vez. Não repita produtos nos vetores.";
            }
        }
        catch (const std::exception &e)
        {
            if (receitaValida == 1)
            {
                cout << "Receita de " << descMedicamento << " validada." << endl;
            }
            if (receitaValida == 0)
            {
                cout << "Receita de " << descMedicamento << " não validada." << endl;
            }
        }
    }

    return true;
}