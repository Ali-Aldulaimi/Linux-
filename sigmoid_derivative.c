/* This file is about a sigimoid derivative("dvt") function */
#include <stdio.h>
#include <math.h>

float sigmoid_dvt(float x){
	float z;
        z = 1/(1+expf(-x))*(1-(1/(1+expf (-x));
return z;
}
int main(){
float a=1.4;
printf("the sigimoid derivative of 1.4 is %f\n",sigmoid_dvt(a));
return 0;
}
