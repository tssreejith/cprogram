/*
 * compoundinterst.c
 *
 *  Created on: Oct. 15, 2019
 *      Author: sreejith
 */
#include<stdio.h>

int main(){
float principal=1000.00;
float r=6;
float time=30;
float a=principal;
for(int i=0;i<time;i++)
a=a+(a*(r/100));
printf("Your Final Amount is : ");
printf("%f \n",a);
printf("Your Gain is : ");
printf("%f \n",a-principal);
return 0;
}
