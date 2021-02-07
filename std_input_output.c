#include <stdio.h> 

int main(int argc, char *argv[]){ 
int a[10];
int b[10];
printf("Enter a 2 letter word "); 
printf("and press return: "); 
a = getc(stdin); 
b = getchar(); 
printf("The first letter was: "); 
putc(a, stdout); 
printf("\nFollowed by: "); 
putchar(b);
putchar(10); 
printf("Goodbye!\n"); 
} 

