// computer scheduling
//_______________________________ premitive scheduling ------------------//
//   &&&&&&&&&&&&&&&&& lowest remaining time first &&&&&&&&&&&&&&&&&&&&&&

#include<stdio.h>
#include<iostream>
using namespace std;
struct data
{
    int arrivaltime;
    int busttime;
    int index;
};
void printtemp(struct data temp)
{
    cout<<"temp.index is"<< temp.index <<"temp.arrivaltime  "<<temp.arrivaltime<<" temp. bustime "<<temp.busttime<<endl;
}
struct data findminarrivaltime(struct data* node,int countp)
{
    struct data temp=node[1];
    //temp.arrivaltime=node[1].arrivaltime;
    //temp.busttime=node[1].busttime;
    //temp.index=1;
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
        if(node[i].busttime!=0)
        {
            return 1;
        }
    }
    return 0;
}
struct data findthelowestnode(struct data* node,int countp,int storetime)
{
    //we need to find out the element whose arrival time is greater than equal to the storetime and
    // bust time is minimum
    struct data temp=node[1];
    //temp.arrivaltime=node[1].arrivaltime;
    //temp.busttime=node[1].busttime;
    //temp.index=node[1].index;
    int i;
    for(i=1;i<=countp;i++)
    {
        if((node[i].arrivaltime<=storetime)&&(node[i].busttime!=0))
        {
            printf("ss");

            if(node[i].busttime<temp.busttime)
            {
                temp.arrivaltime=node[i].arrivaltime;
                temp.busttime=node[i].busttime;
                temp.index=i;
            }
        }
    }
    printf("temp.arrivaltime is %d",temp.arrivaltime);
    printf("\n");
    printf("temp.bustime is %d",temp.busttime);
    printf("\n");
    printf("temp.index is %d",temp.index);
    printf("\n");
    return temp;

}
int main()
{
    printf("Enter the number of processes you want to enter");
    int countp;
    scanf("%d",&countp);
    int i;
    struct data node[countp+1];

    for(i=1;i<=countp;i++)
    {

        printf("Enter the ARRIVAL TIME  of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",node[i].arrivaltime);
       // node[i].arrivaltime=arrivaltime[i];
        printf("Enter the BUST TIME  of the   ");
        printf("%d ",i);
        printf(" th process");
        printf("\n");
        scanf("%d",node[i].busttime);
        //node[i].busttime=busttime[i];
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
    while((temp.arrivaltime)>0)
    {
        storedata[storeindex]=-1;
        storeindex++;
        temp.arrivaltime=temp.arrivaltime-1;
    }
    // now we get the minimum element accordingly for it and corresponding to the min element we print the -1
    // for the time when no process is executing accordingly for it
    printf("store time till now is ");
    printf("\n");
    printf("%d",storetime);
    printf("\n");
    while(1)
    {
        // now what we did
        // finding the minimum element whose count arrival time is greater than
        // means whose arrival time is greater than the present time and
        // the bust time is minimum accordingly for it
        // arrival time is same than same process is running
        //now we have temp is already their
            if(allnotzero(node,countp)==0)
            {
                break;
            }
        temp = findthelowestnode(node,countp,storetime);
        printf("temp is %d\n              %d\n                %d\n",temp.arrivaltime,temp.busttime,temp.index);
        storedata[storeindex]=temp.index;
        storeindex=storeindex+1;
        node[temp.index].busttime=node[temp.index].busttime - 1;

    }
    printf("store index is %d",storeindex);
    printf("\n");
    for(i=0;i<storeindex;i++)
    {
        printf("%d",storedata[i]);
        printf("  ");
    }
    printf("\n");

}

