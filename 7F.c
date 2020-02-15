#include<stdio.h>
int main()
{
    int n,k;
    static int data[100];
    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= k; j++)
        {
            if(i % j == 0)
                {
                if(data[i] == 0)
                    data[i] = 1;
                else
                    data[i] = 0;
                }
        }
    }
    for(int i = 1; i <= n; i++)
        if(data[i] == 1)
        printf("%d ",i);
}
