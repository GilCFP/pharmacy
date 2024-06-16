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
    for (auto &i : estoque)
    {
      if (i->produto == item->produto)
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

int Sistema::disponibilidadeItem(Item *item)
{
  for (auto &i : estoque)
  {
    if (i->produto == item->produto)
    {
      return i->total;
    }
  }
  return 0;
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

bool finalizarCompra(Cliente *cliente, Vendedor *vendedor)
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

void Sistema::iniciar()
{
  while (true)
  {
    int selecao;
    cout << "Selecione o seu perfil\n1.Gerente\n2.Cliente" << endl;
    cin >> selecao;
    if (selecao = 1)
    {
      cout << "Bem vindo à interface de Gerente.\n Aqui voce pode adicionar itens ao estoque." << endl;
      while (true)
      {
        cout << "Qual tipo de produto gostaria de adicionar ao estoque?\n1.Alimento\n2.Cosmetico\n3.Medicamento" << endl;
        cin >> selecao;

        if(selecao == 1){

          int calorias, quantidadeprod;
          string descricaoprod;
          float preco;

          cout << "Preencha os dados no seguinte formato: calorias descricao quantidade preco";
          cin >> calorias >> descricaoprod >> quantidadeprod >> preco;
          Alimento temp(calorias, descricaoprod, quantidadeprod, preco);

          cout << "Voce esta adicionando o seguinte alimento ao estoque:"<<endl;
          temp.InformacoesProduto();

          int total;
          cout <<"Quantas unidades deseja adicionar?" << endl;
          cin>> total;

          Item item(&temp,total);
          estoque.push_back(&item);
        }

        if(selecao == 2){

          string lote,descricaoprod;
          int quantidadeprod;
          float preco;

          cout << "Preencha os dados no seguinte formato: lote descricao quantidade preco";
          cin >> lote >> descricaoprod >> quantidadeprod >> preco;
          Cosmetico temp(lote, descricaoprod, quantidadeprod, preco);

          cout << "Voce esta adicionando o seguinte cosmetico ao estoque:"<<endl;
          temp.InformacoesProduto();

          int total;
          cout <<"Quantas unidades deseja adicionar?" << endl;
          cin>> total;

          Item item(&temp,total);
          estoque.push_back(&item);
        }

        if(selecao == 3){

          string prescricao, descricaoprod;
          int quantidadeprod;
          float preco;

          cout << "Preencha os dados no seguinte formato: prescricao descricao quantidade preco";
          cin >> prescricao >> descricaoprod >> quantidadeprod >> preco;

          cout << "Qual tipo de medicamento gostaria de adicionar ao estoque?\n1.Analgesico \n2.Antibiotico \n3.Remedio controlado\n4.Anabolizante"<< endl;
          cin >> selecao;
          Medicamento*temp;

          if(selecao == 1){
            temp = &Analgesico(prescricao, false, descricaoprod, quantidadeprod, preco);
          }
          if(selecao == 2){
            temp = &Antibiotico(prescricao, true, descricaoprod, quantidadeprod, preco);
          }
          if(selecao == 3){
            temp = &Controlado(prescricao, true, descricaoprod, quantidadeprod, preco);
          }
          if(selecao == 4){
            Agulha agulha("Agulha para anabolizante", quantidadeprod, 0);
            temp = &Anabolizante(prescricao, false, descricaoprod, quantidadeprod, preco, &agulha);
          }

          cout << "Voce esta adicionando o seguinte alimento ao estoque:"<<endl;
          temp->InformacoesProduto();

          Item item(temp,quantidadeprod);
          estoque.push_back(&item);
        }
      }
    }
  }
}