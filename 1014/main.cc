#include <stdio.h>
int GCD(int m,int n)
{
    int t;
    while(n)
    {
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}
 
int main()
{
    int step,mod;
    while(scanf("%d%d",&step,&mod)!=EOF)
    {
        if(GCD(step,mod)==1)
            printf("%10d%10d    Good Choice\n\n",step,mod);
        else
            printf("%10d%10d    Bad Choice\n\n",step,mod);
    }
    return 0;
}
