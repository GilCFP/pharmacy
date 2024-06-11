#define CATCH_CONFIG_MAIN
#include "Catch2.hpp"
#include <iostream>

#include "../medicamento.hpp"

#include "../Produto-junto-hpp/agulha.hpp"

#include "../tiposDeMedicamento-hpp/antibiotico.hpp"
#include "../tiposDeMedicamento-hpp/controlado.hpp"
#include "../tiposDeMedicamento-hpp/analgesico.hpp"
#include "../tiposDeMedicamento-hpp/anabolizante.hpp"

using std::cout;
using std::endl;

TEST_CASE("DESCRIÇÕES DOS PRODUTOS"){

    Agulha* agulhas = new Agulha("5ml", 20, 2.90);

    Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
    Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
    Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
    Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

    cout << durateston->InformacoesProduto() << endl;
    cout << penicilina->InformacoesProduto() << endl;
    cout << ibuprofeno->InformacoesProduto() << endl;
    cout << ritalina->InformacoesProduto() << endl;
}

