#include <stdlib.h>
#include <stdio.h>
#include "buscaArquivo.h"
#include <iostream>
#include <fstream>
#include <string>

//construtor
buscaArquivo::buscaArquivo(){
	this->nomeArquivo = "onze.in";
	cont = 0;
}

//destrutor
buscaArquivo::~buscaArquivo(){
	std::cout<<"Fim"<<std::endl;
}

//metodos
void buscaArquivo::lerArquivo(){

	std::ifstream leitura;
	this->nomeArquivo = "onze.in";
	leitura.open(nomeArquivo.c_str());

	if(!leitura.is_open()){
		std::cout<<"Problema ao abrir arquivo"<<std::endl;
		leitura.clear();
	}else{
		while(leitura.get(this->numero)){
			if(this->numero != '\n'){
				this->numeroVetorInteiro[this->cont] =(int) this->numero - 48;
				this->cont++;
			}
			if(this->numero == '\n'){
				if(numeroVetorInteiro[0] != 0){
					verifica(numeroVetorInteiro,this->cont);
				//std::cout<<" "<<std::endl;
				this->cont = 0;
				}else{
					break;
				}
			}
		}
	}
	leitura.close();
}

void buscaArquivo::verifica(int numeroVetorInteiro[1000], int tam){
	for(int i=0; i<tam;i++){
		if(i % 2 == 0){
			this->somaOrdemPar += numeroVetorInteiro[i];
		}else{
			this->somaOrdemImpar += numeroVetorInteiro[i];
		}
	}

	this->subtracao = somaOrdemPar - somaOrdemImpar;

	if(subtracao < 0){
		subtracao = subtracao*(-1);
	}

	if( (subtracao == 0) || (subtracao % 11 == 0)){

		std::cout<<" Sim"<<std::endl;
	}else{
		std::cout<<" Não"<<std::endl;
	}
	this->somaOrdemImpar = 0;
	this->somaOrdemPar = 0;
}
