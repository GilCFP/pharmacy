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
    cout << "Voce está adicionando " << item->total << " "<< std::boolalpha << item->produto->precisaDeReceita << " unidades do seguinte item ao estoque:\n"
         << item->produto->InformacoesProduto() << endl;
    for (auto &i : estoque)
    {
      if (i->produto->getDescricaoProduto() == item->produto->getDescricaoProduto())
      {
        i->total += item->total;
        return true;
      }
    }
    this->estoque.push_back(item);
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

bool Sistema::removerDoEstoque(int index, int quantidade)
{
  try
  {
    // Impossivel realizar operação
    if (estoque[index]->total < quantidade)
    {
      return false;
    }

    // Deleta o item do estoque
    if (estoque[index]->total == quantidade)
    {
      delete estoque[index];
      estoque.erase(estoque.begin() + index);
      return true;
    }

    // Decrementa o total de item
    estoque[index]->total = estoque[index]->total - quantidade;
    return true;
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
    cout << "\nEstoque atual:" << endl;
    for (Item *i : estoque)
    {
      cout << l << " - (" << i->total << ") " << i->produto->InformacoesProduto() << endl;
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

bool Sistema::removerDoCarrinho(int index, int quantidade, Cliente *cliente)
{
  try
  {
    return cliente->removeCompraCarrinho(index, quantidade);
  }
  catch (const std::exception &e)
  {
    std::cerr << "Erro:" << e.what() << std::endl;
    return false;
  }
}

int Sistema::disponibilidadeItem(int index)
{
  return estoque[index]->total;
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

bool Sistema::finalizarCompra(Cliente *cliente, Vendedor *vendedor)
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
  // Loop para manter as opearações
  while (true)
  {
    // Variável para marcar a seleção no menu
    int selecao;

    cout << "Selecione o seu perfil\n1.Gerente" << endl;
    cin >> selecao;
    if (selecao == 0)
    {
      break;
    }
    if (selecao == 1)
    {
      cout << "Bem vindo à interface de Gerente.\nAqui voce pode adicionar ou remover itens do estoque." << endl;
      while (true)
      {
        cout << "Digite 1 para adicionar itens e 2 para remover itens" << endl;
        cin >> selecao;
        if (selecao == 0)
        {
          break;
        }

        if (selecao == 1)
        {
          while (true)
          {
            // Menu tipos de produtos
            cout << "Qual tipo de produto gostaria de adicionar ao estoque?\n1.Alimento\n2.Cosmetico\n3.Medicamento" << endl;
            cin >> selecao;

            // Abortar operações
            if (selecao == 0)
            {
              break;
            }

            // Adiciona um alimento ao estoque
            if (selecao == 1)
            {

              int calorias, quantidadeprod, total;
              string descricaoprod;
              float preco;

              while (true)
              {
                try
                {
                  cout << "Preencha os dados no seguinte formato: calorias descricao unidades-por-item preco" << endl;
                  cin >> calorias >> descricaoprod >> quantidadeprod >> preco;

                  cout << "Quantos itens deseja adicionar?" << endl;
                  cin >> total;

                  break;
                }
                catch (const std::exception &e)
                {
                  cout << "Os dados informados são incompatíveis com os dados solicitados, tente novamente" << endl;
                }
              }
              adicionarAoEstoque(new Item(new Alimento(calorias, descricaoprod, 1, preco), total));
            }

            // Adiciona um cosmético ao estoque
            if (selecao == 2)
            {

              string lote, descricaoprod;
              int quantidadeprod, total;
              float preco;

              while (true)
              {
                try
                {
                  cout << "Preencha os dados no seguinte formato: lote descricao preco " << endl;
                  cin >> lote >> descricaoprod >> preco;

                  cout << "Quantas caixas deseja adicionar?" << endl;
                  cin >> total;

                  break;
                }
                catch (const std::exception &e)
                {
                  cout << "Os dados informados são incompatíveis com os dados solicitados, tente novamente" << endl;
                }
              }
              adicionarAoEstoque(new Item(new Cosmetico(lote, descricaoprod, 1, preco), total));
            }

            // Adiciona um medicamento ao estoque
            if (selecao == 3)
            {

              string prescricao, descricaoprod;
              int quantidadeprod, total;
              float preco;
              while (true)
              {
                try
                {
                  cout << "Qual tipo de medicamento gostaria de adicionar ao estoque?\n1.Analgesico \n2.Antibiotico \n3.Remedio controlado\n4.Anabolizante" << endl;
                  cin >> selecao;

                  cout << "Preencha os dados no seguinte formato: prescricao descricao unidades-por-caixa preco " << endl;
                  cin >> prescricao >> descricaoprod >> quantidadeprod >> preco;

                  cout << "Quantas caixas deseja adicionar?" << endl;
                  cin >> total;

                  break;
                }
                catch (const std::exception &e)
                {
                  cout << "Os dados informados são incompatíveis com os dados solicitados, tente novamente" << endl;
                }
              }
              // Instancia um novo Item com um novo Analgésico
              if (selecao == 1)
              {
                bool precisaDeReceita = false;
                adicionarAoEstoque(new Item(new Analgesico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco), total));
              }

              // Instancia um novo Item com um novo Antibiótico
              if (selecao == 2)
              {
                bool precisaDeReceita = true;
                adicionarAoEstoque(new Item(new Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco), total));
              }

              // Instancia um novo Item com um novo remédio Controlado
              if (selecao == 3)
              {
                bool precisaDeReceita = true;
                adicionarAoEstoque(new Item(new Controlado(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco), total));
              }

              // Instancia um novo Item com um novo Anabolizante
              if (selecao == 4)
              {
                Agulha* agulha = new Agulha("Agulha para anabolizante", quantidadeprod, 0);


                bool precisaDeReceita = true;
                adicionarAoEstoque(new Item(new Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco, agulha), total));
              }
            }
            this->verEstoque();
          }
        }

        if (selecao == 2)
        {
          string descricao;
          cout << "Digite a descrição do produto que deseja remover do estoque" << endl;
          cin >> descricao;
          int index = indexItem(descricao);
          if (index == -1)
          {
            cout << "Esse produto não existe no estoque, tente com outra descricao" << endl;
          }
          else
          {
            int remove;
            cout << "Voce selecionou esse item: " << estoque[index]->produto->InformacoesProduto() << "\n Existem " << estoque[index]->total << " unidades deste item no estoque, quantas deseja remover?" << endl;
            try
            {
              cin >> remove;
            }
            catch (const std::exception &e)
            {
              cout << "Ops, parece que voce nao passou um número, tente novamente" << endl;
              continue;
            }

            if (remove > estoque[index]->total)
            {
              cout << "Voce está tentando remover mais itens do que disponíveis, tente novamente" << endl;
            }
            else
            {
              removerDoEstoque(index, remove);
            }
            verEstoque();
          }
        }
      }
    }
  }
}

void Sistema::comprar(Cliente *cliente)
{
  cout << "Bem vindo à farmácia inter.\nAqui voce pode adicionar itens ao seu carrinho" << endl;
  while (true)
  {
    cliente->verCompras();
    int selecao;

    cout << "Qual operação deseja realizar?\n1.Adicionar produto ao carrinho\n2.Remover produto do carrinho\n3.Finalizar compra" << endl;
    try
    {
      cin >> selecao;
    }
    catch (const std::exception &e)
    {
      cout << "Ops, parece que voce nao passou um número, tente novamente" << endl;
      continue;
    }

    //Finalizar compra
    if (selecao == 3)
    {
      this->olharCarrinho(cliente);
      this->finalizarCompra(cliente, this->vendedor);
      return;
    }

    //Remover do carrinho
    if (selecao == 2)
    {
      string descricao;
      cout << "Digite a descrição do produto que deseja remover do carrinho" << endl;
      cin >> descricao;
      int index = cliente->indexItem(descricao);

      int remove;
      cout << "Voce selecionou esse item: " << cliente->carrinho[index]->produto->InformacoesProduto() << "\n Existem " << cliente->carrinho[index]->total << "unidades deste item no seu carrinho, quantas deseja remover?" << endl;
      try
      {
        cin >> remove;
      }
      catch (const std::exception &e)
      {
        cout << "Ops, parece que voce nao passou um número, tente novamente" << endl;
        continue;
      }

      if (remove > cliente->carrinho[index]->total)
      {
        cout << "Voce está tentando remover mais itens do que disponíveis, tente novamente" << endl;
      }
      else
      {
        adicionarAoEstoque(new Item(new Produto(cliente->carrinho[index]->produto->getDescricaoProduto(), cliente->carrinho[index]->produto->getQuantidadeProduto(), cliente->carrinho[index]->produto->getPrecoProduto()), remove));
        cliente->removeCompraCarrinho(index, remove);
      }
      this->olharCarrinho(cliente);
    }

    //Adicionar ao carrinho
    if (selecao == 1)
    {
      this->olharCarrinho(cliente);

      cout << "Qual tipo de produto gostaria de adicionar ao carrinho?\n1.Alimento\n2.Cosmetico\n3.Medicamento" << endl;
      try
      {
        cin >> selecao;
      }
      catch (const std::exception &e)
      {
        cout << "Ops, parece que voce nao passou um número, tente novamente" << endl;
        continue;
      }

      if (selecao == 0)
      {
        break;
      }

      string descricao;
      cout << "Digite a descricao do produto desejado:" << endl;
      cin >> descricao;
      int index = indexItem(descricao);
      int disponivel = disponibilidadeItem(index);

      // Caso não haja itens disponíveis
      if (disponivel == 0)
      {
        cout << "Não possuimos esse produto disponível ;-;" << endl;
        continue;
      }
      int qtdDesejada;
      cout << "Possuimos " << disponivel << " items disponíveis, quantos vai querer?" << endl;
      try
      {
        cin >> qtdDesejada;
      }
      catch (const std::exception &e)
      {
        cout << "Ops, parece que voce nao passou um número, tente novamente" << endl;
        continue;
      }

      if (qtdDesejada > disponivel)
      {
        cout << "Não possuímos a quantidade desejada :(" << endl;
        continue;
      }

      Item *itemSelecionado = estoque[index];
      Produto *produtoSelecionado = itemSelecionado->produto;
      if (selecao != 3)
      {
        // Instancia um "clone" do produto selecionado e adiciona-o no carrinho
        adicionarAoCarrinho(new Item(new Produto(produtoSelecionado->getDescricaoProduto(), produtoSelecionado->getQuantidadeProduto(), produtoSelecionado->getPrecoProduto()), qtdDesejada), cliente);
        removerDoEstoque(index, qtdDesejada);
        continue;
      }
      cout << estoque[index]->produto->precisaDeReceita << endl;

      //Medicamento precisa de receita
      if (produtoSelecionado->precisaDeReceita)
      {
        if (farmaceutico->verificarReceita(cliente->receitas, produtoSelecionado))
        {
          // Instancia um "clone" do produto selecionado e adiciona-o no carrinho
          adicionarAoCarrinho(new Item(new Produto(produtoSelecionado->getDescricaoProduto(), produtoSelecionado->getQuantidadeProduto(), produtoSelecionado->getPrecoProduto()), qtdDesejada), cliente);
          removerDoEstoque(index, qtdDesejada);
          continue;
        }
        cout << "Voce nao possui receita para o remédio desejado >_<" << endl;
      }

    }

    cliente->verCompras();
  }
}

Sistema::~Sistema()
{
  for (Item *item : estoque)
  {
    delete item;
  }
  delete vendedor;
  delete farmaceutico;
  delete gerente;
}