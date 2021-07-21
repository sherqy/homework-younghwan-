#include <stdio.h>
#define N 5

int main(void)
{
    /*/1¹ø
    
    int sum = 0;
    char flag;
    int j,k;
    for(j=1,flag=1;j<=4;j++)
    {
        for (k=1,sum=0;k<=4;k++)
        {
            if(j!=k)
                sum += j+k+ ++flag;
        }
        printf("%5d %5d %5d %5d\n",sum,j,k,flag);
    }
     
    2¹ø*/
    
    int i,j,k;
    
    int cnt = 0;
    
    for (i=0; i<=N; ++i)
    {
        for(j=0; j<=N; ++j)
        {
            for(k=1; k<=N; ++k)
                if(2*i+j+k == N){
                    ++cnt;
                    printf("%3d %3d %3d\n",i,j,k);}
        }
    }
    printf("Count: %d\n",cnt);
    
    return 0;
}

