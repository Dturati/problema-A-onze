#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>


class buscaArquivo{
private:
	std::string nomeArquivo;
	char numero;
	long int num;
	int numeroVetorInteiro[1000];
	int cont;
	int somaOrdemPar;
	int somaOrdemImpar;
	int subtracao;
	
public:
	//construtor
	buscaArquivo();

	//destrutor
	~buscaArquivo();

	//metodos
	void lerArquivo();
	void verifica(int numeroVetorInteiro[1000], int tam);
};