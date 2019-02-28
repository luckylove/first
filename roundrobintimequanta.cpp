// computer scheduling
//_______________________________ premitive scheduling ------------------//
//   &&&&&&&&&&&&&&&&& round robin &&&&&&&&&&&&&&&&&&&&&&

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
#include<bits/stdc++.h>
using namespace std;
void putallelementinqueue(queue<struct data> &qu ,int storetime,struct data* node,int countp)
{
    int i;
    for(i=1;i<=countp;i++)
    {
        if(node[i].arrivaltime==storetime&&node[i].busttime!=0)
        {
            qu.push(node[i]);
        }
    }
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
   // printf("\n");

    // now we need jto use the queue accordingly for it
    queue<struct data> qu;
    //qu.push(temp);
    putallelementinqueue(qu,storetime,node,countp);
    struct data temp1;
    while(!qu.empty())
    {
        temp1=qu.front();
        qu.pop();
        if(temp1.busttime>2)
        {
            // then we put first of all all the processes whose temp is
            // storetime
            putallelementinqueue(qu,storetime+1,node,countp);
            putallelementinqueue(qu,storetime+2,node,countp);
            storedata[storeindex]=temp1.index;
            storeindex++;
            storedata[storeindex]=temp1.index;
            storeindex++;

            storetime+=2;
            temp1.busttime=(temp1.busttime)-2;
            qu.push(temp1);

        }
        else if(temp1.busttime==2)
        {
            // means temp1.busttime is less than 2

            putallelementinqueue(qu,storetime+1,node,countp);
            putallelementinqueue(qu,storetime+2,node,countp);
            storetime+=2;
            storedata[storeindex]=temp1.index;
            storeindex++;
            storedata[storeindex]=temp1.index;
            storeindex++;
        }
        else
        {
            putallelementinqueue(qu,storetime+1,node,countp);
            storetime+=1;
            storedata[storeindex]=temp1.index;
            storeindex++;

        }
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



