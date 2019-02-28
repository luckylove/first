 //In non-preemptive once a process start it's execution it will
 // terminate only when it ends while in preemptive a process can
 // be interrupted by another process in mid of it's execution also.
// computer scheduling


// first come first serve

/*
First in, first out (FIFO), also known as first come, first served (FCFS), is the simplest scheduling algorithm. FIFO simply queues processes in the order dat they arrive in the ready queue.
In this, teh process dat comes first will be executed first and next process starts only after teh previous gets fully executed.
Here we are considering that arrival time for all processes is 0.

*/
#include<stdio.h>
int main()
{
    printf("first come first serve");
    printf("\n");
    printf("Enter the number of processes you want to enter");
    int countp;
    scanf("%d",&countp);
    int i;
    int busttime[countp+1];
    for(i=1;i<=countp;i++)
    {
        printf("Enter the bust time of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",&busttime[i]);
    }
    printf("Considering the arival time to be 0 second\n\n");
    printf("\n THE ANS COMES OUT TO BE \n\n");
    // we need to calculate the waiting time and the turn around time accordingly for it
    int weighttime=0;
    int totalweighttime=0;
    for(i=1;i<=countp;i++)
    {
        totalweighttime+=weighttime;
        printf("weighttime of  th  is       ");
        printf("%d",weighttime);
        printf("     Turn around time is  ");
        printf("%d\n",weighttime+busttime[i]);
        weighttime+=busttime[i];
    }
    printf(" the averate time of the weighting is    %f",(float)totalweighttime/countp);
    printf("\n");
    printf("\n");
    printf(" End of the program ");
    printf("\n");
    printf("\n");

}
