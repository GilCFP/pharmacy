#include <iostream>
#include "Receita.hpp"
#include "Cliente.hpp"
#include "Pessoa.hpp"
#include "Produto.hpp"
#include "Medicamento.hpp"

using std::cout;
using std::endl;

int main()
{

Cliente C1 ("Berenice", 56);
cout << C1.pegarNome() << endl;

cout << "--------------------" << endl;

Medicamento M1 ("Paracetamol", 5.25, 18);
Medicamento M2 ("Hibuprofeno", 20.34, 20);
cout << M1.getNome() << endl;
cout << M2.getNome() << endl;

cout << "--------------------" << endl;

Receita R1 ("Receita de paracetamol", 2, true);
R1.associarMed(&M1);
Receita R2 ("Receita de GH", 2, true);
Receita R3 ("Receita de Trembolona", 5, false);

cout << R1.getNomeRemedio() << endl;
cout << R2.getNomeRemedio() << endl;
cout << R1.pegarValidade() << endl;
cout << R3.pegarDescricao() << endl;

cout << "--------------------" << endl;

C1.addReceita(R1);
C1.addReceita(R2);
C1.addReceita(R3);
C1.verReceitas();
cout << "--------------------" << endl;

Produto P1 ("Guarana", 5.25);
Produto P2 ("Bala", 1.38);
Produto P3 ("Chocolate", 10.80);

C1.addCompraCarrinho(P1);
C1.addCompraCarrinho(P2);
C1.addCompraCarrinho(P3);
C1.verCompras();

cout << "--------------------" << endl;

system("pause");

return 0;
}