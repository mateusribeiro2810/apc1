#include <stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP 0.0165

int main() {

  float preco_inicial = 100.0f;
  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preço final do produto é %f\n", preco_final);
  printf("O valor do imposto ICMS é %f\n", valor_icms);
  printf("O valor do imposto COFINS é %f\n", valor_cofins);
  printf("O valor do imposto PIS_PASEP é %f\n", valor_pispasep);

  return 0;
  
}