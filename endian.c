#include<stdio.h>
typedef struct node{
	int data;
	node* next;
} node;
void main()
{
	node pi;
	int n = 674672130738944;
	printf("%d\n",3*sizeof(pi));
    int c = 0,k=0;
    for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  
  printf("\noriginal order stored: 00000000 01111111 00000000 01111111");
  char* p = &n;
  unsigned int o = *p;
  p++;
  unsigned int t = *p;
  p++;
  unsigned int th = *p;
  p++;
  unsigned int f = *p;
  
  printf("\n%d,%d,%d,%d\n",o,t,th,f);
  
  printf("Little-Endian\n");
 
  printf("\n");

}
