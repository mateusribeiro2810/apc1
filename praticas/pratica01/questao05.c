#include <stdio.h>

int main () {

const float GIGABYTE = 1024*1024*1024;
const float gb = 10;
  
const float bytes = gb * GIGABYTE;

printf("10GB equivale em bytes o valor de %f\n", bytes);


return 0;
  
}


//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).