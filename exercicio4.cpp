#include <iostream>
using namespace std;

class Empregado{
private:
    string nome;
    string sobrenome;
    float salario;
public:
    Empregado (string n, string s, float sl) : nome (n), sobrenome (s), salario (sl) {}

    void setNome(string nome) {
        this -> nome = nome;
    }

    void setSobrenome(string sobrenome){
        this -> sobrenome = sobrenome;
    }

    void setSalario(float salario){
        salario = salario;
    }

    string getNome() const{
        return nome;
    }

    string getSobrenome() const{
        return sobrenome;
    }

    float getSalario() const{
        return salario;
    }

    float salarioAnual() const{
        return salario * 12;
    }

    void aplicarAumento(){
        salario *= 1.10;
    }
};

int main(){
    
    Empregado empregado1("João", "Silva", 3000);
    Empregado empregado2("Maria", "Santos", 4000);

    cout << "Salario anual de " << empregado1.getNome() << " " << empregado1.getSobrenome() << ": " << empregado1.salarioAnual() << endl;
    cout << "Salario anual de " << empregado2.getNome() << " " << empregado2.getSobrenome() << ": " << empregado2.salarioAnual() << endl;

    empregado1.aplicarAumento();
    empregado2.aplicarAumento(); 

    cout << "Salario anual de " << empregado1.getNome() << " " << empregado1.getSobrenome() << " apos aumento: " << empregado1.salarioAnual() << endl;
    cout << "Salario anual de " << empregado2.getNome() << " " << empregado2.getSobrenome() << " apos aumento: " << empregado2.salarioAnual() << endl;

    return 0;
}