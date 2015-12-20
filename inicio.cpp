/*
	David Turati
	Encontrar número divisível por 11
	Projeto de Análise de Algoritmos
*/
#include <cstdlib>
#include <iostream>
#include "entrada.h"
#include "buscaArquivo.h"
#include <stdio.h>
using namespace std;

int main(){
	int opt = 0;
	std::cout<<"1 para digirar numero, 2 para ler de arquivo, 0 para sair"<<std::endl;
	std::cin>>opt;

	while(opt != 0){
		if(opt == 1){
			Entrada *en = new Entrada();
			en->lerNumero();
  			int *ordemPar = en->getOrdemPar();
  			int *ordemImpar = en->getOrdemImpar();
  			en->numeroGerado(ordemPar,ordemImpar);
  			en->verificaDivisibilidade(ordemPar, ordemImpar);
 			delete(en);
		}

		if(opt == 2){
			buscaArquivo *ba = new buscaArquivo();
			ba->lerArquivo();
			delete(ba);
		}

		std::cout<<"1 para digirar numero, 2 para ler de arquivo, 0 para sair"<<std::endl;
		std::cin>>opt;
		cin.clear();
		cin.ignore();
	}
		
  return 0;
}
