#include<stdio.h>
int digit_sum(unsigned int x)
{
    int sum=0,rem=0;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        sum=sum+rem;
    }
    return sum;
}
int prime(int x)
{
    int i,flag=0;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        return 0;
    }
    else if(flag==0)
    {
        return 1;
    }
}
int main()
{
    int a,b,i,p,sum=0,j,flag=0;
    scanf("%d %d",&a,&b);
    for(i=a; i<b; i++)
    {
        p=prime(i);
        if(p==1)
        {
            sum=digit_sum(i);
            for(j=2; j<sum; j++)
            {
                if(sum%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("%d\n",i);
            }
        }
        flag=0;
    }
    return 0;
}
