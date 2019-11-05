/*
 * ci2.c
 *
 *  Created on: Oct. 15, 2019
 *      Author: sreejith
 */
#include<stdio.h>

int main(){
float principal;
float roi;
float time,a;
printf("Enter the principle amount : ");
scanf("%f",&principal);
printf("Enter the rate of interest : ");
scanf("%f",&roi);
printf("Enter the time period of your loan : ");
scanf("%f",&time);
a=principal;
for(int i=0;i<time;i++)
a=a+(a*(roi/100));
printf("Your Final Amount is : ");
printf("%f \n",a);
printf("Your Gain is : ");
printf("%f \n",a-principal);
return 0;
}
