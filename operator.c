
#include <stdio.h> 

int main(int argc, char *argv[]){ 
  printf("Size of int is %d bytes\n",sizeof(int)); 
  printf("Size of short int is %d bytes\n",sizeof(short int)); 
  printf("Size of long int is %d bytes\n\n", sizeof(long int)); 
  
  printf("Size of signed int is %d bytes\n",sizeof(signed int)); 
  printf("Size of signed short int is %d bytes\n", 
          sizeof(signed short int)); 
  printf("Size of signed long int is %d bytes\n\n", 
          sizeof(signed long int)); 
  
  printf("Size of unsigned int is %d bytes\n",sizeof(signed int)); 
  printf("Size of unsigned short int is %d bytes\n", 
          sizeof(unsigned short int)); 
  printf("Size of unsigned long int is %d bytes\n\n", 
          sizeof(unsigned long int)); 
  
  printf("Size of char is %d byte\n",sizeof(char)); 
  printf("Size of float is %d bytes\n",sizeof(float)); 
  printf("Size of double is %d bytes\n", sizeof(double)); 

  return 0; 
} 
