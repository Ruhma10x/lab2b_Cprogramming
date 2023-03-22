#include <stdio.h>

#define CSR_VAL 0x8000abcd00001234UL

#define ADDRESS 0x5300f000U

unsigned long int my_csr = CSR_VAL;

int main(void)
{


  // (a) here:
  my_csr = my_csr | 1 << 0;

  // (b) here:
  my_csr = my_csr & ~(1 << 2);

  // (c) here:
  my_csr= my_csr & ~(0xFF << 8);
  my_csr |= 0xEE << 8;

  // (d) here:
  unsigned int address_bits = (ADDRESS >> 12) & 0xFFFF;
  my_csr = my_csr & ~(0xFFFFUL << 16);
  my_csr |= address_bits << 16;

  printf("%lx \n", my_csr);

  return 0;
}