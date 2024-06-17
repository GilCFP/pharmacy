#include "Sistema.hpp"
#include <iostream>
#include <exception>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

Sistema::Sistema(Vendedor *vendedor, Farmaceutico *farmaceutico, Gerente *gerente)
{
  this->vendedor = vendedor;
  this->farmaceutico = farmaceutico;
  this->gerente = gerente;
}

bool Sistema::adicionarAoEstoque(Item *item)
{
  try
  {
    // for (auto i : estoque)
    // {
    //   if (i->produto == item->produto)
    //   {
    //     i->total += item->total;
    //     return true;
    //   }
    // }
    this->estoque.push_back(item);
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::removerDoEstoque(Item *item)
{
  try
  {
    for (auto &i : estoque)
    {
      if (i->produto == item->produto && item->total < i->total)
      {
        i->total -= item->total;
        return true;
      }
    }
    return false;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

void Sistema::verEstoque()
{
  try
  {
    int l = 0;
    for (Item *i : estoque)
    {
      cout << i << endl;
      cout << l << i->produto->InformacoesProduto() << endl;
      l++;
    }
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return;
  }
}

bool Sistema::adicionarAoCarrinho(Item *item, Cliente *cliente)
{
  try
  {
    cliente->addCompraCarrinho(item);
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::removerDoCarrinho(Item *item, Cliente *cliente)
{
  try
  {
    return cliente->removeCompraCarrinho(item);
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

int Sistema::disponibilidadeItem(string descricao)
{
  for (auto &i : estoque)
  {
    if (i->produto->getDescricaoProduto() == descricao)
    {
      return i->total;
    }
  }
  return 0;
}

int Sistema::indexItem(string descricao)
{
  int index = 0;
  for (auto &i : estoque)
  {
    if (i->produto->getDescricaoProduto() == descricao)
    {
      return index;
    }
    index++;
  }
  return -1;
}

bool Sistema::olharCarrinho(Cliente *cliente)
{
  try
  {
    cliente->verCompras();
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::finalizarCompra(Cliente* cliente, Vendedor* vendedor)
{
  try
  {
    float valortotal = vendedor->cobrar(cliente->carrinho);
    std::cout << "O valor total da sua compra é de: " << valortotal << " segue abaixo o código do pix para pagamento" << std::endl;
    std::cout << "00020126360014BR.GOV.BCB.PIX0114+55319892138465204000053039865802BR5903Gil6002BH62070503***63040324" << std::endl;
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

void Sistema::iniciar(Gerente *gerente)
{
  while (true)
  {
    int selecao;
    cout << "Selecione o seu perfil\n1.Gerente" << endl;
    cin >> selecao;
    if (selecao == 0){
      break;
    }
    if (selecao == 1)
    {
      cout << "Bem vindo à interface de Gerente.\nAqui voce pode adicionar itens ao estoque." << endl;
      while (true)
      {
        cout << "Qual tipo de produto gostaria de adicionar ao estoque?\n1.Alimento\n2.Cosmetico\n3.Medicamento" << endl;
        cin >> selecao;
        if (selecao == 0)
        {
          break;
        }

        if (selecao == 1)
        {

          int calorias, quantidadeprod;
          string descricaoprod;
          float preco;

          cout << "Preencha os dados no seguinte formato: calorias descricao quantidade preco " << endl;
          cin >> calorias >> descricaoprod >> quantidadeprod >> preco;
          Alimento temp(calorias, descricaoprod, quantidadeprod, preco);

          cout << "Voce esta adicionando o seguinte alimento ao estoque:" << endl;
          cout << temp.InformacoesProduto() << endl;

          int total;
          cout << "Quantas unidades deseja adicionar?" << endl;
          cin >> total;

          Item item(&temp, total);
          adicionarAoEstoque(new Item(new Alimento(calorias, descricaoprod, quantidadeprod, preco), total));
        }

        if (selecao == 2)
        {

          string lote, descricaoprod;
          int quantidadeprod;
          float preco;

          cout << "Preencha os dados no seguinte formato: lote descricao quantidade preco " << endl;
          cin >> lote >> descricaoprod >> quantidadeprod >> preco;
          Cosmetico temp(lote, descricaoprod, quantidadeprod, preco);

          cout << "Voce esta adicionando o seguinte cosmetico ao estoque:" << endl;
          cout << temp.InformacoesProduto() << endl;

          int total;
          cout << "Quantas unidades deseja adicionar?" << endl;
          cin >> total;

          Item item(&temp, total);
          adicionarAoEstoque(new Item(new Cosmetico(lote, descricaoprod, quantidadeprod, preco), total));
        }

        if (selecao == 3)
        {

          string prescricao, descricaoprod;
          int quantidadeprod;
          float preco;

          cout << "Qual tipo de medicamento gostaria de adicionar ao estoque?\n1.Analgesico \n2.Antibiotico \n3.Remedio controlado\n4.Anabolizante" << endl;
          cin >> selecao;

          cout << "Preencha os dados no seguinte formato: prescricao descricao quantidade preco " << endl;
          cin >> prescricao >> descricaoprod >> quantidadeprod >> preco;

          // Medicamento *temp;

          if (selecao == 1)
          {
            // Analgesico temp(prescricao, false, descricaoprod, quantidadeprod, preco);
            // cout << "Voce esta adicionando o seguinte medicamento ao estoque:" << endl;
            // temp.InformacoesProduto();
            // Item item(&temp, quantidadeprod);
            adicionarAoEstoque(new Item(new Analgesico(prescricao, false, descricaoprod, quantidadeprod, preco), quantidadeprod));
          }
          else if (selecao == 2)
          {
            // Antibiotico temp(prescricao, true, descricaoprod, quantidadeprod, preco);
            // cout << "Voce esta adicionando o seguinte medicamento ao estoque:" << endl;
            // temp.InformacoesProduto();
            // Item item(&temp, quantidadeprod);
            adicionarAoEstoque(new Item(new Antibiotico(prescricao, true, descricaoprod, quantidadeprod, preco), quantidadeprod));
          }
          else if (selecao == 3)
          {
            // Controlado temp(prescricao, true, descricaoprod, quantidadeprod, preco);
            // cout << "Voce esta adicionando o seguinte medicamento ao estoque:" << endl;
            // temp.InformacoesProduto();
            // Item item(&temp, quantidadeprod);
            adicionarAoEstoque(new Item(new Controlado(prescricao, true, descricaoprod, quantidadeprod, preco), quantidadeprod));
          }
          else if (selecao == 4)
          {
            Agulha agulha("Agulha para anabolizante", quantidadeprod, 0);
            Anabolizante temp(prescricao, false, descricaoprod, quantidadeprod, preco, &agulha);
            cout << "Voce esta adicionando o seguinte medicamento ao estoque:" << endl;
            // temp->InformacoesProduto();
            // Item item(&temp, quantidadeprod);
            adicionarAoEstoque(new Item(new Anabolizante(prescricao, false, descricaoprod, quantidadeprod, preco, &agulha), quantidadeprod));
          }
        }
        this->verEstoque();
      }
    }
  }
}

void Sistema::comprar(Cliente *cliente)
{
  cout << "Bem vindo à farmácia inter.\nAqui voce pode adicionar itens ao seu carrinho" << endl;
  while (true)
  {
    int selecao;
    cout << "Qual tipo de produto gostaria de adicionar ao carrinho?\n1.Alimento\n2.Cosmetico\n3.Medicamento" << endl;
    cin >> selecao;
    if (selecao == 0)
    {
      break;
    }
    string descricao;
    cout << "Digite a descricao do produto desejado:" << endl;
    cin >> descricao;
    int disponivel = disponibilidadeItem(descricao);
    if (disponivel == 0)
    {
      cout << "Não possuimos esse produto disponível" << endl;
    }
    else
    {
      int qtdDesejada;
      cout << "Possuimos " << disponivel << " items disponíveis, quantos vai querer?" << endl;
      cin >> qtdDesejada;
      if (qtdDesejada > disponivel)
      {
        cout << "Não possuímos a quantidade desejada :(" << endl;
      }
      Item *itemSelecionado = estoque[indexItem(descricao)];
      Produto *produtoSelecionado = itemSelecionado->produto;
      if (selecao != 3)
      {
        adicionarAoCarrinho(new Item(new Produto(produtoSelecionado->getDescricaoProduto(), produtoSelecionado->getQuantidadeProduto(), produtoSelecionado->getPrecoProduto()), qtdDesejada), cliente);
      }
      else
      {
        if (produtoSelecionado->precisaDeReceita)
        {
          vector<Produto> medicamento;
          medicamento.push_back(Produto(produtoSelecionado->getDescricaoProduto(), produtoSelecionado->getQuantidadeProduto(), produtoSelecionado->getPrecoProduto()));

          if (farmaceutico->verificarReceita(cliente->receitas, medicamento))
          {
            adicionarAoCarrinho(new Item(new Produto(produtoSelecionado->getDescricaoProduto(), produtoSelecionado->getQuantidadeProduto(), produtoSelecionado->getPrecoProduto()), qtdDesejada), cliente);
          }
          else
          {
            cout << "Voce nao possui receita para o remédio desejado :(" << endl;
          }
        }
      }
    }
    cliente->verCompras();
  }
  this->finalizarCompra(cliente,this->vendedor);
}

Sistema::~Sistema()
{
}