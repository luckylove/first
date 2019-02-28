// computer scheduling
//_______________________________ premitive scheduling ------------------//
//   &&&&&&&&&&&&&&&&& lowest remaining time first &&&&&&&&&&&&&&&&&&&&&&

#include<stdio.h>
struct data
{
    int arrivaltime;
    int busttime;
    int index;
};
struct data findminarrivaltime(struct data* node,int countp)
{
    struct data temp=node[1];
    int i;
    for(i=2;i<=countp;i++)
    {
        if(temp.arrivaltime>node[i].arrivaltime)
        {
            temp=node[i];
        }
    }
    return temp;
}
int allnotzero(struct data* node,int countp)
{
    int i;
    for(i=1;i<=countp;i++)
    {
       // printtemp(node[i]);
        if(node[i].busttime!=0)
        {
            return 1;
        }
    }
    return 0;
}
int findthelowestnode(struct data* node,int countp,int storetime)
{
    struct data temp;
    int i;
    int flag=0;
    for(i=1;i<=countp;i++)
    {
        if(flag==0&&node[i].busttime!=0&&node[i].arrivaltime<=storetime)
        {
          temp=node[i];
          flag=1;
        }

        if(flag==1)
        {
            if((node[i].arrivaltime<=storetime)&&(node[i].busttime!=0)&&(node[i].busttime<temp.busttime))
            {
              temp=node[i];
            }
        }
    }
    //printtemp(temp);
    return temp.index;

}
int main()
{
    printf("Enter the number of processes you want to enter");
    int countp;
    scanf("%d",&countp);
    int i;
    struct data node[countp+1];
    int busttime[countp+1];
    int arrivaltime[countp+1];
    int completiontime[countp+1];
    int waitingtime[countp+1];
    int turnaroundtime[1+countp];
    for(i=0;i<=countp;i++)
    {
        completiontime[i]=0;
    }
    for(i=1;i<=countp;i++)
    {

        printf("Enter the ARRIVAL TIME  of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",&node[i].arrivaltime);
        arrivaltime[i]=node[i].arrivaltime;
        printf("Enter the BUST TIME  of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",&node[i].busttime);
        busttime[i]=node[i].busttime;
        node[i].index=i;
    }
    printf(" NOW THE ANS OF THE SCHEDULING PROBLEM ACCORDING TO THE LOWEST TIME FIRST IS \n");
    // we can store the data in the form of the array

    int storedata[1000];
    int storeindex=0;

    int weighttime=0;
    int totalweighttime=0;
    int totalturnaround=0;
    // we need to find min accordingly for it
    struct data temp = findminarrivaltime(node,countp);
    int storetime=temp.arrivaltime;
    int start1=storetime;
    while(start1--)
    {
        storedata[storeindex]=-1;
        storeindex++;

    }
    printf("store time till now is ");
    printf("\n");
    printf("%d",storetime);
    printf("\n");
    int index1;
    while(1)
    {
            if(allnotzero(node,countp)==0)
            {
                break;
            }
         index1 = findthelowestnode(node,countp,storetime);
        storetime++;
        storedata[storeindex]=index1;
        storeindex=storeindex+1;
        node[index1].busttime=node[index1].busttime - 1;

    }
    printf("store index now is is %d",storeindex);
    printf("\n");
    printf(" the queue that will be formed is \n\n");
    for(i=0;i<storeindex;i++)
    {
        printf("%d",storedata[i]);
        printf("  ");
    }
    printf("\n\n");
    for(i=storeindex-1;i>=0;i--)
    {
        if(completiontime[storedata[i]]==0)
        {
            completiontime[storedata[i]]=i+1;
        }
    }

    int totalwaitingtime=0;
    int totalturnaroundtime=0;
    for(i=1;i<=countp;i++)
    {
       turnaroundtime[i]=completiontime[i]-arrivaltime[i];
       waitingtime[i]=turnaroundtime[i]-busttime[i];
       totalwaitingtime+=waitingtime[i];
       totalturnaroundtime+=turnaroundtime[i];
    }
    printf("\n processid          waiting time              turnaroundtime              completiontime  \n");

    for(i=1;i<=countp;i++)
    {
        printf("%d                    %d                                %d                             %d\n",i,waitingtime[i],turnaroundtime[i],completiontime[i]);

    }
    printf("\n");
    printf("Average waiting time  is   %f\n",(double)totalwaitingtime/countp);
    printf("Average Turn around time is   is   %f\n",(double)totalturnaroundtime/countp);

    printf("\n");

}



