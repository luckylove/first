#include <stdio.h>
#include <sys/types.h>
#include<unistd.h>
int main()
{ int n=1,i=99;
pid_t pid =fork();
if(pid==0)
{
    printf("%d",n);
    while(i>0)
    {
        n=n+1;
        printf("%d\n",n);
        i--;
    }
}

}
