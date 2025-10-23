#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade =  16;
    salario = 20.000;
    altura = 1.55;
    genero = 'M';
    nome = "joão Arlesson ";

    cout << fixed << setprecision(2);
    cout << "IDADE: " << idade << end1;
    cout << "SALARIO: " << salario << end1;
    cout << "ALTURA: " << altura <<  end1;
    cout << "GENEO: " << genero  << end1;
    cout << "NOME: " << nome << end1; 

    return 0;
}