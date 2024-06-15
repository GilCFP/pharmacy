#include "../Produto_classe_pai/Produto/produto.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Farmaceutico.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Gerente.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Vendedor.hpp"
#include "../Pessoa_classe/Cliente_classe/Cliente.hpp"
#include "../Produto_classe_pai/Produto/Item.hpp"
class Sistema
{
private:
    vector <Item*> estoque;

    Vendedor vendedor;
    Farmaceutico farmaceutico;
    Gerente gerente;
    int disponibilidadeItem(Item*);


public:
    Sistema(Vendedor vendedor, Farmaceutico farmaceutico, Gerente gerente);
    ~Sistema();

    void iniciar();

    bool adicionarAoEstoque(Item*);
    bool removerDoEstoque(Item*);

    bool adicionarAoCarrinho(Item*, Cliente*);

    bool removerDoCarrinho(Item*, Cliente*);

    bool olharCarrinho(Cliente*);
    bool finalizarCompra(Cliente*, Vendedor*);
};