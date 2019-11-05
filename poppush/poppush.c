/*
 * poppush.c
 *
 *  Created on: Oct. 15, 2019
 *      Author: sreejith
 */
#include<stdio.h>
#include<stdlib.h>
#define L 1024
#define TRUE 1U
#define FALSE 0U

int s[L];
size_t s_top;
typedef unsigned short int bool_t;

bool_t stackempty(void)
{
	if(s_top==0)
		return TRUE;
	else
		return FALSE;

}
void pop(void)
{
	if(stackempty())
	exit(0);
else
{
	s_top=s_top+1;
}

int main(void)
{
	int loadarr[]={52,-29,36,1154,72,0,68,44,33,59}
	size_t i;
	for(i=0;i!=10;++i)
	{
		push(loadarr[i]);
	}
	int x;
	while(stackempty==FALSE)
	{
		x=pop();
		printf("%d \n",x);
	}
	return 0;
}
	}
}
}
