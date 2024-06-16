#ifndef PRODUTO
#define PRODUTO

#include <string>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>

using std::string;
using std::vector;
using std::setprecision;
using std::ostringstream;

class Produto
{
    private:
        string descricaoprod;
        int quantidadeprod;
        float preco;

    public:

        Produto();
        Produto(string descricaoprod, int quantidadeprod, float preco);
        virtual string InformacoesProduto()=0;
        string getDescricaoProduto();
        int getQuantidadeProduto();
        float getPrecoProduto();
        virtual string InformacoesProduto() = 0;
        virtual ~Produto();

};

#endif
