#include <stdio.h> 

int main(int argc, char *argv[]){

int i=10; /* initialize variables */ 
int j=0;  /* part a of a for loop */ 
do{	 /* part b of for loop */ 
printf("%d - %d = %d\n", i, j, i-j); 
i--;  /* do something to variables */ 

j++;  /* part c of for loop        */ 
} 
while(i>j);
	    return 0; 
} 
