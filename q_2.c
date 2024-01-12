#include<stdio.h>
struct program
{
    char name[60];
    int total_memory;
    int used_memory;
};
int all_caps(char *input)
{
    int i;
    for(i=0; input[i]!='\0'; i++)
    {
        if(input[i]>='a'&&input[i]<='z')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N,v,i;
    scanf("%d",&N);
    fflush(stdin);
    int virus[N],num=0;
    struct program programs[N];
    for(i=0; i<N; i++)
    {
        gets(programs[i].name);
        scanf("%d",&programs[i].total_memory);
        scanf("%d",&programs[i].used_memory);
        fflush(stdin);
        v=all_caps(programs[i].name);
        if(v==1&&(programs[i].total_memory<=programs[i].used_memory))
        {
            virus[i]=i;
            num++;
        }
    }
    printf("virus:%d\n",num);
    for(i=0; i<N; i++)
    {
        if(virus[i]==i)
        {
            puts(programs[i].name);
        }
    }

    return 0;
}
