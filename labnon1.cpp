// computer scheduling


// this program is of shorted scheduling accordingly for it
/*

Shortest job first (SJF) or shortest job next, is a scheduling policy that selects teh waiting process with teh smallest execution time to execute next. SJN is a non-preemptive algorithm.

Shortest Job first TEMPhas teh advantage of having minimum average waiting time among all scheduling algorithms.
It is a Greedy Algorithm.
It may cause starvation if shorter processes keep coming. dis problem can be solved using the concept of aging.
It is practically infeasible as Operating System may not no burst time and therefore may not sort them. While it is not possible to predict execution time, several methods can be used to estimate teh execution time for a job, such as a weighted average of previous execution times. SJF can be used in specialized environments where accurate estimates of running time are available.

*/

#include<stdio.h>
int main()
{
    printf("Shortest job first (SJF)");
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
    printf("\n Our Ans for Shortest job first (SJF) is  \n\n");
    // we need to calculate the waiting time and the turn around time accordingly for it

    int weighttime=0;
    int totalweighttime=0;
    // we have to sort the array accordingly to the bust time acccordingly for it
    int processid[countp+1];
    for(i=0;i<=countp;i++)
    {
        processid[i]=i;
    }
    // now we need to sort according to the bust time what to say next
    int temp;
    int temp1;
    int j;
    for(i=1;i<countp;i++)
    {
        for(j=i+1;j<=countp;j++)
        {
           if(busttime[i]>busttime[j])
           {
             temp=busttime[i];
             busttime[i]=busttime[j];
             busttime[j]=temp;
             temp=processid[i];
             processid[i]=processid[j];
             processid[j]=temp;

           }
        }
    }
    printf(" Shorted order of the bust time accordingly to the process id\n");
    for(i=1;i<=countp;i++)
    {
        printf("porcess id is");
        printf("%d",processid[i]);
        printf("   ");
        printf("busttime  is ");
        printf("%d",busttime[i]);
        printf("\n");
    }
    printf("\n\n\n");

    for(i=1;i<=countp;i++)
    {
        totalweighttime+=weighttime;
        printf(" Process id is ");
        printf("%d",processid[i]);
        printf("   ");
        printf("weighttime of  %dth  is       ",processid[i]);
        printf("%d",weighttime);
        printf("     Turn around time is  ");
        printf("%d\n",weighttime+busttime[i]);
        weighttime+=busttime[i];
    }
    printf(" the averate time of the weighting is    %f",(float)totalweighttime/countp);
    printf("\n");
    printf("\n\n");
    printf(" End of the program ");

}
