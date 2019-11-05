/*
 * greet.c
 *
 *  Created on: Oct. 15, 2019
 *      Author: sreejith
 */
#include<stdio.h>
#include<string.h>

int main()
{
char name[40];
char greet[]="Greetings ";
int strLength;
int starLine;
printf("Enter your Name : ");
scanf("%s",name);
strcat(greet,name);
strLength=strlen(greet);
starLine=strLength+8;
for(int i=0;i<starLine;i++)
printf("*");
printf("\n");
printf("*   ");
printf("%s",greet);
printf("   *\n");
for(int i=0;i<starLine;i++)
printf("*");
printf("\n");
return 0;
}
