#include "../Produto_classe_pai/Produto/produto.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Farmaceutico.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Gerente.hpp"
#include "../Pessoa_classe/Classe_Funcionario/cabecalho/Vendedor.hpp"
#include "../Pessoa_classe/Cliente_classe/Cliente.hpp"
class Sistema
{
private:
    vector <Produto> estoque;
    vector <Produto> carrinho;

    Vendedor vendedor;
    Farmaceutico farmaceutico;
    Gerente gerente;
    bool produtoDisponivel(Produto);


public:
    Sistema(Vendedor vendedor, Farmaceutico farmaceutico);
    Sistema(Vendedor vendedor, Farmaceutico farmaceutico, Gerente gerente);
    ~Sistema();

    bool adicionarAoCarrinho(Produto, int quantidade, Cliente);
    bool adicionarAoCarrinho(Produto, Cliente);

    bool removerDoCarrinho(Produto, int quantidade, Cliente);
    bool removerDoCarrinho(Produto, Cliente);

    bool olharCarrinho(Cliente);
    bool finalizarCompra(Cliente);
};
