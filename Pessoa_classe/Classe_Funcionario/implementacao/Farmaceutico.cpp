#include "../cabecalho/Farmaceutico.hpp"
#include <iostream>

bool Farmaceutico::verificarReceita(Receita receita, Medicamento medicamento)
{
    if(receita.pegarValidade() == "Receita fora da validade") { return false; }

    string descMedicamento = medicamento.getDescricaoProduto();
    string medicamentoReceita = receita.pegarDescricao();
    if(descMedicamento != medicamentoReceita) { return false; }

    return true;
}