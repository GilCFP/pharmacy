#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch2.hpp"

#include "../Alimentos-hpp/BalaFini.hpp"
#include "../Alimentos-hpp/PastilhaTosse.hpp"
#include "../Cosmeticos-hpp/Condicionador.hpp"
#include "../Cosmeticos-hpp/Shampoo.hpp"
#include "../Produto/produto.hpp"
#include "../TiposdeProduto-hpp/alimento.hpp"
#include "../TiposdeProduto-hpp/cosmetico.hpp"

TEST_CASE("Teste de Alimento - Pastilha") 
{
    Alimento* pastilha = new Pastilha(50, "Pa Morango", 10, 15);

    REQUIRE(pastilha->Produto::getPrecoProduto() == 15.00);
    REQUIRE(pastilha->Produto::getQuantidadeProduto() == 10);
    REQUIRE(pastilha->Produto::getDescricaoProduto() == "Pa Morango");
    REQUIRE(pastilha->InformacoesProduto() == "Descricao:  Pa Morango  Quantidade: 10  Calorias: 50    Preco: 15.00");

    delete pastilha;
}

TEST_CASE("Teste de Alimento - BalaFini") 
{
    Alimento* balafini1 = new BalaFini(80, "BF Morango", 70, 28);

    REQUIRE(balafini1->Produto::getPrecoProduto() == 28.00);
    REQUIRE(balafini1->Produto::getQuantidadeProduto() == 70);
    REQUIRE(balafini1->Produto::getDescricaoProduto() == "BF Morango");
    REQUIRE(balafini1->InformacoesProduto() == "Descricao:  BF Morango  Quantidade: 70  Calorias: 80    Preco: 28.00");

    delete balafini1;
}

TEST_CASE("Teste de Cosmetico - Condicionador") 
{
    Cosmetico* clearman = new Condicionador("A01523", "COND cabelos", 25, 17.5);

    REQUIRE(clearman->Produto::getPrecoProduto() == 17.50);
    REQUIRE(clearman->Produto::getQuantidadeProduto() == 25);
    REQUIRE(clearman->Produto::getDescricaoProduto() == "COND cabelos");

    delete clearman;
}

TEST_CASE("Teste de Cosmetico - Shampoo") 
{
    Cosmetico* shampoozao = new Shampoo("S01523", "Shampoo ensaboado", 13, 15.85);

    REQUIRE(shampoozao->Produto::getPrecoProduto() == 15.85);
    REQUIRE(shampoozao->Produto::getQuantidadeProduto() == 13);
    REQUIRE(shampoozao->Produto::getDescricaoProduto() == "Shampoo ensaboado");

    delete shampoozao;
}

TEST_CASE("Teste de Polimorfismo - Alimentos") 
{
    Alimento* pastilha2 = new Pastilha(52, "Pa2 Morango", 12, 12);
    Alimento* balafini1 = new BalaFini(80, "BF Morango", 70, 28);

    std::vector<Alimento*> alimentos;
    alimentos.push_back(pastilha2);
    alimentos.push_back(balafini1);

    REQUIRE(alimentos[0]->InformacoesProduto() == "Descricao:  Pa2 Morango      Quantidade: 12  Calorias: 52    Preco: 12.00");
    REQUIRE(alimentos[1]->InformacoesProduto() == "Descricao:  BF Morango  Quantidade: 70  Calorias: 80    Preco: 28.00");

    for (auto a : alimentos) 
    {
        delete a;
    }
}

TEST_CASE("Teste de Polimorfismo - Cosmeticos") 
{
    Cosmetico* clearman = new Condicionador("A01523", "COND cabelos", 25, 17.5);
    Cosmetico* shampoozao = new Shampoo("S01523", "Shampoo ensaboado", 13, 15.85);

    std::vector<Cosmetico*> cosmeticos;
    cosmeticos.push_back(clearman);
    cosmeticos.push_back(shampoozao);

    REQUIRE(cosmeticos[0]->InformacoesProduto() == "Descricao: COND cabelos      Quantidade: 25  Lote: A01523    Preco: 17.50");
    REQUIRE(cosmeticos[1]->InformacoesProduto() == "Descricao: Shampoo ensaboado Quantidade: 13  Lote: S01523    Preco: 15.85");

    for (auto c : cosmeticos) 
    {
        delete c;
    }
}