#include <iostream>
#include <string>
#include <stdexcept>

class Data {
private:
    int mes;
    int dia;
    int ano;

public:
    // Construtor com parâmetros padrão
    Data(int m = 1, int d = 1, int a = 2000) : mes(m), dia(d), ano(a) {
        if (!dataValida(mes, dia, ano)) {
            throw std::invalid_argument("Data inválida.");
        }
    }

    // Métodos getters e setters
    void setMes(int m) {
        if (m >= 1 && m <= 12) {
            mes = m;
        } else {
            throw std::invalid_argument("Mês inválido.");
        }
    }

    int getMes() const {
        return mes;
    }

    void setDia(int d) {
        if (d >= 1 && d <= diasNoMes(mes, ano)) {
            dia = d;
        } else {
            throw std::invalid_argument("Dia inválido.");
        }
    }

    int getDia() const {
        return dia;
    }

    void setAno(int a) {
        if (a >= 0) {
            ano = a;
        } else {
            throw std::invalid_argument("Ano inválido.");
        }
    }

    int getAno() const {
        return ano;
    }

    // Método para imprimir a data
    void imprimirData() const {
        std::cout << mes << "/" << dia << "/" << ano << std::endl;
    }

    // Método para calcular a quantidade de dias do ano até aquele mês
    int diasAteMes(int m) const {
        int dias = 0;
        for (int i = 1; i < m; ++i) {
            dias += diasNoMes(i, ano);
        }
        return dias;
    }

    // Sobrecarga do método anterior para receber o nome do mês em letras minúsculas
    int diasAteMes(const std::string& nomeMes) const {
        int m = mesFromNome(nomeMes);
        if (m == -1) {
            throw std::invalid_argument("Nome do mês inválido.");
        }
        return diasAteMes(m);
    }

private:
    // Função para verificar se uma data é válida
    bool dataValida(int m, int d, int a) const {
        if (m < 1 || m > 12) {
            return false;
        }
        if (d < 1 || d > diasNoMes(m, a)) {
            return false;
        }
        return true;
    }

    // Função para retornar o número de dias em um determinado mês de um ano
    int diasNoMes(int m, int a) const {
        if (m == 2) {
            if (anoBissexto(a)) {
                return 29;
            } else {
                return 28;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    // Função para verificar se um ano é bissexto
    bool anoBissexto(int a) const {
        return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    }

    // Função para retornar o número do mês a partir do nome do mês em letras minúsculas
    int mesFromNome(const std::string& nomeMes) const {
        if (nomeMes == "janeiro") return 1;
        if (nomeMes == "fevereiro") return 2;
        if (nomeMes == "marco") return 3;
        if (nomeMes == "abril") return 4;
        if (nomeMes == "maio") return 5;
        if (nomeMes == "junho") return 6;
        if (nomeMes == "julho") return 7;
        if (nomeMes == "agosto") return 8;
        if (nomeMes == "setembro") return 9;
        if (nomeMes == "outubro") return 10;
        if (nomeMes == "novembro") return 11;
        if (nomeMes == "dezembro") return 12;
        return -1; // Retornar -1 se o nome do mês for inválido
    }
};

int main() {
    // Criando um objeto da classe Data
    Data data1(2, 15, 2023);

    // Exibindo a data
    std::cout << "Data: ";
    data1.imprimirData();

    // Calculando e exibindo a quantidade de dias do ano até o mês atual
    std::cout << "Dias ate o mes: " << data1.diasAteMes(data1.getMes()) << std::endl;

    // Calculando e exibindo a quantidade de dias do ano até o mês de maio
    std::cout << "Dias ate maio: " << data1.diasAteMes("maio") << std::endl;

    return 0;
}
