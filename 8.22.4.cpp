//#include<bits/stdc++.h>
// first of all i will make myself out form the matrix then after that
// i will print the previuos values accordingly for it
#include<iostream>
using namespace std;
int main()
{
    int test,n,m,x,i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d",&m,&n,&x);
         // how many of them diluted to the sigle digit whose value is x
         int sum=0;
         int countt=0;
         int temp;
            temp=m;
            while(temp>=10)
            {
                sum=0;
                while(temp>0)
                {
                    sum+=temp%10;
                    temp=temp/10;
                }
                temp=sum;
            }
        sum=(n-m)/9;
        int store=(n-m)%9;

        if(x==temp)
        {
            countt=1;
        }
        else if(x>temp)
        {

            if(x-temp<=store)
            {
                countt=1;
            }
            else
            {
                countt=0;
            }
        }
        else
        {
            //(x<temp)
            if(9-temp+x<=store)
            {
                countt=1;
            }
            else
            {
                countt=0;
            }
        }
        countt+=sum;


         printf("%d\n",countt);
    }
}
