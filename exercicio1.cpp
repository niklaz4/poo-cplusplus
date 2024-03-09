#include <iostream>
using namespace std;

class GradeBook{
private:
    string disciplina;
    string nomeProfessor;

public:
    GradeBook(string d, string p) : disciplina(d), nomeProfessor(p) {}

    void setDisciplina (string d){
        disciplina = d;
    }

    void setProfessor(string p){
        nomeProfessor = p;
    }

    string getDisciplina() const {
        return disciplina;
    }

    string getProfessor() const {
        return nomeProfessor;
    }

    void displayMessage() const {
        cout << "Bem vindo ao livro de notas para a disciplina de " << disciplina << "!" << endl;
        cout << "Esse curso eh apresentado pelo professor " << nomeProfessor << endl;
    }
};



int main(){

    GradeBook livroNotas("Programacao em C++", "Dr. Guillermo Camara Chavez");
    livroNotas.displayMessage();
    return 0;
}