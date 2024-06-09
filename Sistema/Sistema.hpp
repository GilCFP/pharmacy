#include "../Produto_classe_pai/Produto/produto.hpp"
#include "../Classe_Funcionario/cabecalho/Farmaceutico.hpp"
#include "../Classe_Funcionario/cabecalho/Gerente.hpp"
#include "../Classe_Funcionario/cabecalho/Vendedor.hpp"

class Sistema
{
private:
    vector <Produto> carrinho;
    Vendedor vendedor;
    Farmaceutico farmaceutico;
    Gerente gerente;

public:
    Sistema(Vendedor vendedor, Farmaceutico farmaceutico);
    Sistema(Vendedor vendedor, Farmaceutico farmaceutico, Gerente gerente);
    ~Sistema();

    bool adicionarAoCarrinho(Produto, int quantidade);
    bool adicionarAoCarrinho(Produto);

    bool removerDoCarrinho(Produto, int quantidade);
    bool removerDoCarrinho(Produto);

    bool olharCarrinho();
    bool finalizarCompra();
};
