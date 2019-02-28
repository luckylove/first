// computer scheduling

// This program is of priority scheduling accordingly for it
// in which we need to provide the priority to the  of the processes then
// the processes will work accordingly to the priority of the


//Priority scheduling is a non-preemptive algorithm and one of teh most common scheduling algorithms in batch systems. Each process is assigned a priority. Process wif teh highest priority is to be executed first and so on.
//Processes wif teh same priority are executed on first come first served basis. Priority can be decided based on memory requirements, time requirements or any other resource requirement.

#include<stdio.h>
int main()
{
     printf("priority scheduling\n");
    printf("Enter the number of processes you want to enter");
    int countp;
    scanf("%d",&countp);
    int i;
    int busttime[countp+1];
    int priority[countp+1];
    for(i=1;i<=countp;i++)
    {
        printf("Enter the bust time of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",&busttime[i]);
        printf(" Enter the priority of ");
        scanf("%d",&priority[i]);
    }
    printf("Considering the arival time to be 0 second\n\n");
    printf("\n Our ans is \n\n");
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
           if(priority[i]>priority[j])
           {
             temp=busttime[i];
             busttime[i]=busttime[j];
             busttime[j]=temp;
             temp=processid[i];
             processid[i]=processid[j];
             processid[j]=temp;

             temp=priority[i];
             priority[i]=priority[j];
             priority[j]=temp;

           }
        }
    }
    printf(" Shorted order of the priority accordingly for it  accordingly to the process id\n");
    for(i=1;i<=countp;i++)
    {
        printf("priority   ");
        printf("%d",priority[i]);
        printf("   ");
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
    printf(" the average time of the weighting is    %f",(float)totalweighttime/countp);
    printf("\n");
    printf("\n\n");
    printf(" End of the program ");

}
