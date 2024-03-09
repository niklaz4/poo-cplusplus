#include <iostream>
using namespace std;

class NotaFiscal {
private:
    string numeroPeca;
    string descricaoPeca;
    int qtdComprada;
    float preco;
public:
    NotaFiscal(string np, string dp, int qc, float p) : numeroPeca (np), descricaoPeca (dp), qtdComprada (qc), preco(p) {}

    void setNumeroPeca(string numeroPeca){
        numeroPeca = numeroPeca;
    } 

    void setDescricaoPeca(string descricaoPeca){
        descricaoPeca = descricaoPeca;
    }

    void setQtdComprada(int qtdComprada){
        qtdComprada = qtdComprada;
    }

    void setPreco(float preco){
        preco = preco;
    }

    string getNumeroPeca() const{
        return numeroPeca;
    }

    string getDescricaoPeca() const{
        return descricaoPeca;
    }

    int getQtdComprada() const{
        return qtdComprada;
    }

    float getPreco() const{
        return preco;
    }

    //metodo getTotalNota
    float getTotalNota() const{
        return qtdComprada * preco;
    }

};

int main(){

    NotaFiscal nota("001", "Placa-mae", 2, 450.50 );

    cout << "Numero da peca: " << nota.getNumeroPeca() << endl;
    cout << "Descricao da peca: " << nota.getDescricaoPeca() << endl;
    cout << "Quantidade comprada: " << nota.getQtdComprada() << endl;
    cout << "Preco unitario: " << nota.getPreco() << endl;
    cout << "Total da nota: " << nota.getTotalNota() << endl;

    return 0;
}