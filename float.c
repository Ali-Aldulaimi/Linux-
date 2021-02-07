#include <stdio.h> 
int main(int argc, char *argv[]){ 

  float a,b,c,d,e,f; 
  
  a = 1/3; 
  b = 1/3.0; 
  c = 1.0/3; 
  d = 1.0/3.0; 
  e = (float)1/3; 
  f = (float)(1/3); 
  
  printf("1 divided by 3 is %d\n", a); 
  printf("1 divided by 3.0 is %d\n", b); 
  printf("1.0 divided by 3 is %f\n", c); 
  printf("1.0 divided by 3.0 is %f\n\n", d); 

  printf("The float-casting of \n"); 
  printf(" 1, divided by 3 is %f\n\n", e); 

  printf("f equals %f\n", f); 
  
  return 0; 
} 
