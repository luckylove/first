//This program prints integer numbers from 1 to 100 using fork() system call.
#include<stdio.h>
int main()
{
    int pid=fork();		//Child process created
    if(pid==0)			//Executing Child process
		for(int j=50;j<=100;j++)
			printf("%d ",j);
	else				//Executing parent process
		for(int j=1;j<50;j++)
			printf("%d ",j);
    printf("\n");
    return 0;
}

