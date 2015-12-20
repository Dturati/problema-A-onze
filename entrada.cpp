#include <string>
#include <iostream>
#include "entrada.h"
#include <stdio.h>
//implementação da classe entrada

//construtor
Entrada::Entrada(){
  this->tam  = 0;
  this->ordemPar[500];
  this->ordemImpar[500];
  this->numero[1000];
  std::cout<<"Objeto entrada"<<std::endl;

}

//destrutor
Entrada::~Entrada(){
  std::cout<<"Fim"<<std::endl;
}

void Entrada::numeroGerado(int* ordemPar, int* ordemImpar){

  std::cout<<"Numero de ordem par "<<std::endl;
  for (int i=0; i<tam; i++){
      if(ordemPar[i] != 0){
        std::cout<<ordemPar[i];
      }
  }
  std::cout<<" "<<std::endl;
  std::cout<<"Numeros de ordem impar "<<std::endl;
  for (int i=0; i<tam; i++){
    if(ordemImpar[i] != 0){
      std::cout<<ordemImpar[i];
    }
  }
  std::cout<<" "<<std::endl;

}

void Entrada::verificaDivisibilidade(int* ordemPar, int* ordemImpar){
  long int somaOdemPar = 0;
  long int somaOrdemImpar = 0;
  int long subTracao = 0;

  for(int i=0; i<this->tam; i++){
      somaOdemPar += this->ordemPar[i];
      somaOrdemImpar += this->ordemImpar[i];
  }

  subTracao = somaOdemPar - somaOrdemImpar;

  if(subTracao < 0){
    subTracao = subTracao*(-1);
  }

  if ( (subTracao == 0) || (subTracao % 11 == 0) ){
    std::cout<<"divisivel"<<std::endl;
  }else{
    std::cout<<"não divisivel"<<std::endl;
  }

}

int* Entrada::getOrdemPar(){
  return this->ordemPar;
}

int* Entrada::getOrdemImpar(){
  return this->ordemImpar;
}

int Entrada::getTam(){
  return this->tam;
}

void Entrada::lerNumero(){
  std::cout<<"Digite um numero:";
  std::cin>>this->numero;
  std::cin.clear();
  std::cin.ignore(1000,'\n');
  int cont = 0;
  
  while(this->numero[cont] != '\0'){
    
    if(cont % 2 == 0){
      this->ordemPar[cont] = (int) this->numero[cont] - 48;
      this->tam++;
    }else{
      this->ordemImpar[cont] = (int) this->numero[cont] - 48;
      this->tam++;
    }

    cont++;
  }
  
}
