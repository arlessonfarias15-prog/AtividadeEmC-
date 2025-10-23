#include <iostream> // Substitui <stdio.h> para entrada e saída
#include <cstdlib>    // Substitui <stdlib.h> para std::system

//Funcao principal do programa (padrão c++)
int main () {
  
  //Imprime principal na tela usando std::cout
  std::cout << "oi, mundo!";
 //Pausa o programa apos executar 
  //Adicinamos uma quebra de linha para a mensagem "pause" não ficar colada
std::cout << "\n";
std::system("pause");// Em C++, é boa prática usar std::system
  return 0; // int main() deve retornar a 0 
}
