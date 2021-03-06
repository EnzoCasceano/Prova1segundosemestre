//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: soma_elementos_nao_repetidos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n 
//   Saída:   devolve a soma dos elementos que não estejam repetidos
//            
//   Exemplo: 
//         v = {1,2,3,2,2,2,2,2,2,2}, resultado = 4
//         v = {1,1,3,3,2,3,3,1,1,1}, resultado = 2
//         v = {4,1,3,3,2,3,3,3,3,3}, resultado = 7
//[]-------------------------------------------------------------[]
int soma_elementos_nao_repetidos(int v[], int n) {
   int i, j, ehRepetido = 0, soma = 0;
   for(i = 0; i < n; i++) {
      for(j = 0; j < n && ehRepetido == 0; j++) {
         if(v[i] == v[j] && i != j)
            ehRepetido = 1; 
      }
      if (ehRepetido == 0) {
         soma += v[i];
      }
      ehRepetido = 0;
   }
   return soma;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v[10] = {1,2,3,2,2,2,2,2,2,2};
   return testar(soma_elementos_nao_repetidos(v, 10), 4);
}

float caso_de_teste02(){
   int v[10] = {1,1,3,3,2,3,3,1,1,1};
   return testar(soma_elementos_nao_repetidos(v, 10), 2);
}

float caso_de_teste03(){
   int v[10] = {4,1,3,3,2,3,3,3,3,3};
   return testar(soma_elementos_nao_repetidos(v, 10), 7);
}

float caso_de_teste04(){
   int v[10] = {4,5,6,7,7,7,7,7,7,7};
   return testar(soma_elementos_nao_repetidos(v, 10), 15);
}

float caso_de_teste05(){
   int v[10] = {1,1,2,2,3,3,4,4,5,6};
   return testar(soma_elementos_nao_repetidos(v, 10), 11);
}

float caso_de_teste06(){
   int v[10] = {1,2,3,1,2,3,1,2,3,6};
   return testar(soma_elementos_nao_repetidos(v, 10), 6);
}

float caso_de_teste07(){
   int v[10] = {1,1,1,1,2,1,1,1,1,3};
   return testar(soma_elementos_nao_repetidos(v, 10), 5);
}

float caso_de_teste08(){
   int v[10] = {3,3,3,3,2,2,2,1,1,3};
   return testar(soma_elementos_nao_repetidos(v, 10), 0);
}

float caso_de_teste09(){
   int v[10] = {1,2,3,4,5,5,4,3,1,3};
   return testar(soma_elementos_nao_repetidos(v, 10), 2);
}

float caso_de_teste10(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   return testar(soma_elementos_nao_repetidos(v, 10), 55);
}


//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01(); 
   r += caso_de_teste02(); 
   r += caso_de_teste03(); 
   r += caso_de_teste04(); 
   r += caso_de_teste05(); 
   r += caso_de_teste06(); 
   r += caso_de_teste07(); 
   r += caso_de_teste08(); 
   r += caso_de_teste09(); 
   r += caso_de_teste10(); 

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
