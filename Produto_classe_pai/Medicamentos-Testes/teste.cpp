
#define CATCH_CONFIG_MAIN
#include "Catch2.hpp"
#include <iostream>
#include <vector>

// #include "../medicamento.hpp"

// #include "../Produto-junto-hpp/agulha.hpp"

// #include "../tiposDeMedicamento-hpp/antibiotico.hpp"
// #include "../tiposDeMedicamento-hpp/controlado.hpp"
// #include "../tiposDeMedicamento-hpp/analgesico.hpp"
// #include "../tiposDeMedicamento-hpp/anabolizante.hpp"

using std::cout;
using std::endl;
using std::vector;

// TEST_CASE("1. DESCRICOES DOS PRODUTOS"){

//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
//     Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
//     Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     cout << durateston->InformacoesProduto() << endl;
//     cout << penicilina->InformacoesProduto() << endl;
//     cout << ibuprofeno->InformacoesProduto() << endl;
//     cout << ritalina->InformacoesProduto() << endl;
// }

// TEST_CASE("2. GET PRECO"){

//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
//     Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
//     Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     cout << agulhas->getPrecoProduto() << endl;
//     cout << durateston->getPrecoProduto() << endl;
//     cout << penicilina->getPrecoProduto() << endl;
//     cout << ibuprofeno->getPrecoProduto() << endl;
//     cout << ritalina->getPrecoProduto() << endl;

//     REQUIRE(agulhas->getPrecoProduto() == 2.90f);
//     REQUIRE(durateston->getPrecoProduto() == 150.98f);
//     REQUIRE(penicilina->getPrecoProduto() == 31.79f);
//     REQUIRE(ibuprofeno->getPrecoProduto() == 20.50f);
//     REQUIRE(ritalina->getPrecoProduto() == 83.71f);

// }

// TEST_CASE("3. GET QUANTIDADE"){

//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
//     Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
//     Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     cout << agulhas->getQuantidadeProduto() << endl;
//     cout << durateston->getQuantidadeProduto() << endl;
//     cout << penicilina->getQuantidadeProduto() << endl;
//     cout << ibuprofeno->getQuantidadeProduto() << endl;
//     cout << ritalina->getQuantidadeProduto() << endl;

//     REQUIRE(agulhas->getQuantidadeProduto() == 20);
//     REQUIRE(durateston->getQuantidadeProduto() == 20);
//     REQUIRE(penicilina->getQuantidadeProduto() == 30);
//     REQUIRE(ibuprofeno->getQuantidadeProduto() == 30);
//     REQUIRE(ritalina->getQuantidadeProduto() == 20);

// }

// TEST_CASE("4. GET DESCRICAO"){
    
//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
//     Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
//     Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     cout << agulhas->getDescricaoProduto() << endl;
//     cout << durateston->getDescricaoProduto() << endl;
//     cout << penicilina->getDescricaoProduto() << endl;
//     cout << ibuprofeno->getDescricaoProduto() << endl;
//     cout << ritalina->getDescricaoProduto() << endl;

//     REQUIRE(agulhas->getDescricaoProduto() == "Agulinx");
//     REQUIRE(durateston->getDescricaoProduto() == "Durateston Super");
//     REQUIRE(penicilina->getDescricaoProduto() == "Penicilinux");
//     REQUIRE(ibuprofeno->getDescricaoProduto() == "Ibupril");
//     REQUIRE(ritalina->getDescricaoProduto() == "Ritanel");

// }

// TEST_CASE("5. GET PRESCRICAO"){

//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
//     Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
//     Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     cout << durateston->getPrescricao() << endl;
//     cout << penicilina->getPrescricao() << endl;
//     cout << ibuprofeno->getPrescricao() << endl;
//     cout << ritalina->getPrescricao() << endl;

//     REQUIRE(durateston->getPrescricao() == "10mg / dia");
//     REQUIRE(penicilina->getPrescricao() == "20mg / dia");
//     REQUIRE(ibuprofeno->getPrescricao() == "20mg / dia");
//     REQUIRE(ritalina->getPrescricao() == "10mg / dia");

// }

// TEST_CASE("6. TESTE PRECISA DE RECEITA"){

//     bool i;

//     Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

//     i = true;
//     Controlado * ritalina1 = new Controlado("10mg / dia", i, "Ritanel", 20, 83.71);

//     i = false;
//     Controlado * ritalina2 = new Controlado("10mg / dia", i, "Ritanel", 20, 83.71);

//     REQUIRE(ritalina1 == ritalina);
//     REQUIRE(ritalina2 == NULL);

// }

// TEST_CASE("7. TESTE QUANTIDADE AGULHAS"){

//     Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

//     Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 10, 150.98, agulhas);

TEST_CASE("8. TESTE DESTRUTOR"){

    Agulha* agulhas = new Agulha("Agulinx", 20, 2.90);

    Anabolizante * durateston = new Anabolizante("10mg / dia", true, "Durateston Super", 20, 150.98, agulhas);
    Antibiotico * penicilina = new Antibiotico("20mg / dia", false, "Penicilinux", 30, 31.79);
    Analgesico * ibuprofeno = new Analgesico("20mg / dia", false, "Ibupril", 30, 20.50);
    Controlado * ritalina = new Controlado("10mg / dia", true, "Ritanel", 20, 83.71);

    vector<Produto*> produtos;

    produtos.push_back(agulhas);
    produtos.push_back(durateston);
    produtos.push_back(penicilina);
    produtos.push_back(ibuprofeno);
    produtos.push_back(ritalina);

    for(auto &produto : produtos){

        INFO("Quantidade de elementos: " << produtos.size());
        delete produto;

    }

}

