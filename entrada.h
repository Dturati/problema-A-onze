#include <string>
#include <stdio.h>
class Entrada{
private:
  int tam;
  char numero[1000];
  int ordemPar[500];
  int ordemImpar[500];

public:
  //construtor
  Entrada();

  //destrutor
  ~Entrada();

  //numero gerado
  void numeroGerado(int *ordemPar, int* ordemImpar);

  //ler numero do usuario
  void lerNumero();

  //verifica se é divisível por 11
  void verificaDivisibilidade(int* ordemPar, int* ordemImpar);

  //metodos geters
  int* getOrdemPar();
  int* getOrdemImpar();
  int getTam();
};
