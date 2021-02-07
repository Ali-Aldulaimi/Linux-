#include <stdio.h> 

/* this program prints Hello */ 
int main(int argc, char *argv[]) { 

char a,b,c; /* declare char variables */ 
  /* declaration and initialization */ 

a = '1';   /* initialize the rest... */ 
b = '2';    /* b = e is incorrect */ 
c = '3';     /* so is c = "l" - you MUST enclose the character with single quote marks*/ 
 /* the ASCII code for l */ 

printf("%c%c%c%c%c\n", a, b, c); 

return 0; 
} 
