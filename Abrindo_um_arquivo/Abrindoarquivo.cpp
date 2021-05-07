#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ofstream arquivo;
  arquivo.open("Fabiano.txt", std::ios_base::app);

  arquivo << "Olá, mundo!\n\nAqui quem fala é o fabiano.";
  arquivo.close();



  return 0;
}