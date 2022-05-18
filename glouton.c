/*GALAI_Nour_El_Houda_12111624*/


#include <stdlib.h> /*EXIT_SUCCESS*/
#include <stdio.h> /*printf, scanf*/


void glouton(u_int16_t s , u_int16_t n, u_int16_t *L, u_int16_t *T);
int main (int argc, char *argv[]){
  u_int16_t n = argc -2;
  u_int16_t s = atoi(argv[argc-1]);
  
  u_int16_t *L = (u_int16_t*)malloc(n*sizeof(u_int16_t));
  u_int16_t *T =(u_int16_t*)malloc(n*sizeof(u_int16_t));
  
  for(u_int16_t i=0; i<n;i++){
    L[i]=atoi(argv[1+i]);
    T[i]=0;
  }
  
  glouton(s ,n,L,T);
  //printf("le nombre minimal de pieces est %d\n", r);
  for(u_int16_t i=0; i<n;i++){
    printf("%d ", T[i]);
  }
  
  
  return EXIT_SUCCESS;
  
}

void glouton(u_int16_t s , u_int16_t n, u_int16_t *L, u_int16_t *T){
  u_int16_t s1=0;
  u_int16_t i=0;
  u_int16_t s2=0;
 
  while(s1<s){
   if(s1+L[i]<=s){
     s1 = s1 + L[i];
     T[i]=T[i] + 1;
     s2++;
   }
   else
     i++;
  }
  
  printf("le nombre minimal de pieces est %d\n", s2);
  
}



