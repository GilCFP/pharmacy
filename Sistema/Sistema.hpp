#ifndef SISTEMA
#define SISTEMA

#include "../Produto_classe_pai/Produto/produto.hpp"
#include "../Produto_classe_pai/TiposdeProduto-hpp/alimento.hpp"
#include "../Produto_classe_pai/TiposdeProduto-hpp/cosmetico.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Farmaceutico.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Gerente.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Vendedor.hpp"
#include "../Pessoa_classe/Cliente_classe/Cliente.hpp"
#include "../Pessoa_Classe/Cliente_classe/Item.hpp"
#include "../Produto_classe_pai/TiposDeMedicamento-hpp/anabolizante.hpp"
#include "../Produto_classe_pai/TiposDeMedicamento-hpp/analgesico.hpp"
#include "../Produto_classe_pai/TiposDeMedicamento-hpp/antibiotico.hpp"
#include "../Produto_classe_pai/TiposDeMedicamento-hpp/controlado.hpp"
#include "../Produto_classe_pai/Produto-junto-hpp/agulha.hpp"


class Sistema
{
private:
    vector <Item*> estoque;

    Vendedor *vendedor;
    Farmaceutico *farmaceutico;
    Gerente *gerente;
    int disponibilidadeItem(int index);


public:
    Sistema(Vendedor *vendedor, Farmaceutico *farmaceutico, Gerente *gerente);
    ~Sistema();

    void iniciar(Gerente*);
    void comprar(Cliente*);
    int indexItem(string descricao);

    bool adicionarAoEstoque(Item*);
    bool removerDoEstoque(int index, int quantidade);
    void verEstoque();

    bool adicionarAoCarrinho(Item*, Cliente*);

    bool removerDoCarrinho(int index, int quantidade, Cliente *cliente);

    bool olharCarrinho(Cliente*);
    bool finalizarCompra(Cliente*, Vendedor*);
};
#endif