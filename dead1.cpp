//                Dead lock                   //
// safety algo

#include<stdio.h>
// function declaration
void callsafetyalgorithm(void);
int main()
{
    printf(" Implementation of the banker's algorithm \n");
    printf("Banker’s algorithm consist of Safety algorithm and Resource request algorithm \n\n") ;
    // now we cal for the safety algorithm form the bankers algorithm
    // we can either provide the data to the safety algo as an argument
    // or we can declare the variable and array global that used in the storage purpose
    // here for the implicity we take the input in the function itself
    callsafetyalgorithm();
    printf("end of the program of the bankers algorithm\n");
}
// function definition of the safety algorithm which we call inside the banker's algo
 void callsafetyalgorithm(void)
{
    // we need to make two matrix then we need to call something accordingly for it
    // one matrix if of the maximum need of the process
    // and the next matrix is of the presently allocated resources
    // then we make the need matrix which denotes the number of resources required by the
    // process now to do the task
     printf(" No we are inside the safety algorithm accordingly \n\n");
    int i,j,k;
    int countp,res;
    printf(" Enter the number of processes you want to execute ");
    scanf("%d",&countp);
    printf("\n Enter the number of resources you want to complete your process");
    scanf("%d",&res);
    int maxneed[countp][res];
    int alocated[countp][res];
    int need[countp][res];
    int resource[res];
    printf("First of all make the maxneed martix\n");
    for(i=0;i<countp;i++)
    {
        printf("enter the requirement of the %d process\n",i);
        for(j=0;j<res;j++)
        {
            scanf("%d",&maxneed[i][j]);
        }
    }
    printf(" Now we make the matrix of the resource which is already allocated to the processes \n");
    for(i=0;i<countp;i++)
    {
        printf("enter the resource already allocated of the %d process\n",i);
        for(j=0;j<res;j++)
        {
            scanf("%d",&alocated[i][j]);
        }
    }
    printf(" Now enter the number of  resources present in the system accordingly \n");
    for(i=0;i<res;i++)
    {
        scanf("%d",&resource[i]);
    }
    // now we need to store the result accordingly for it
    int storedata[countp];
    int storeindex=0;
    // now one my one we find the matrix of the need matrix
     for(i=0;i<countp;i++)
    {
        //printf("enter the resource already allocated of the %d process\n",i);
        for(j=0;j<res;j++)
        {
          //  scanf("%d",&alocated[i][j]);
          need[i][j]=maxneed[i][j]-alocated[i][j];
        }
    }
    // now one byone we need to find the whose process requirement is satisfied by the resouce present
    //and the resource already allocated accordingly for it
    int index=-1;
    // and to indicated the process complete matrix we name a array completed
    int completed[countp]={0};
    while(storeindex<countp)
    {
        // finding out the minimum
        //printf("gg\n");
        index=-1;
                  for(k=0;k<res;k++)
                    {
                        printf("%d      ",resource[k]);
                    }
                    printf("\n");
        for(i=0;i<countp;i++)
        {
            if(completed[i]==0)
            {
                for(j=0;j<res;j++)
                {
                    if(need[i][j]<=resource[j]+alocated[i][j])
                    {
                        // then its ok
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==res)
                {
                    index=i;
                    storedata[storeindex]=i;
                    storeindex++;
                    completed[i]=1;
                    // now we need to change resource j
                    for(k=0;k<res;k++)
                    {
                        resource[k]+=alocated[i][k];
                    }
                    //printf(" Index is %d \n",index);
                    break;

                }
            }
        }
        if(index==-1)
        {
            printf("resouce allocation i not possible \n");
            break;
        }
    }
    if(index!=-1)
    {
        printf(" the process sequence is safe \n\n");
        printf("The process sequence that we get is \n");
        for(i=0;i<storeindex;i++)
        {
            printf("%d   ",storedata[i]);
        }
    }
    printf("\n");
}
