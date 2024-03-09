#include <iostream>
#include <string>

class Aluno {
private:
    std::string nome;
    std::string serie;
    double grau;
    static int quantidadeDeAlunos; // Variável estática para contar a quantidade de objetos Aluno

public:
    // Construtor
    Aluno(std::string nome, std::string serie, double grau) : nome(nome), serie(serie), grau(grau) {
        quantidadeDeAlunos++;
    }

    // Destrutor
    ~Aluno() {
        quantidadeDeAlunos--;
    }

    // Getters e Setters
    void setNome(std::string nome) {
        this->nome = nome;
    }

    std::string getNome() const {
        return nome;
    }

    void setSerie(std::string serie) {
        this->serie = serie;
    }

    std::string getSerie() const {
        return serie;
    }

    void setGrau(double grau) {
        this->grau = grau;
    }

    double getGrau() const {
        return grau;
    }

    // Método estático para obter a quantidade de objetos Aluno criados
    static int getQuantidadeDeAlunos() {
        return quantidadeDeAlunos;
    }
};

// Inicialização da variável estática
int Aluno::quantidadeDeAlunos = 0;

int main() {
    // Criando um vetor de 15 objetos Aluno
    Aluno alunos[15];

    // Preenchendo os dados dos alunos através do setter
    for (int i = 0; i < 15; ++i) {
        alunos[i].setNome("Aluno " + std::to_string(i+1));
        alunos[i].setSerie("Série " + std::to_string(i+1));
        alunos[i].setGrau(i * 5.0); // Atribuindo grau fictício
    }

    // Exibindo a quantidade de objetos Aluno criados
    std::cout << "Quantidade de objetos Aluno criados: " << Aluno::getQuantidadeDeAlunos() << std::endl;

    return 0;
}
