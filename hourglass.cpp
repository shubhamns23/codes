#include<stdio.h>

int main()
{
    int a[4][4];
    int i,j,flag=1,sum,best_sum;
/*
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\ta[%d][%d]: %d",i,j,a[i][j]);
            
        }
        printf("\n");
    }
   */
   a[0][0]=3;
   a[0][1]=8;
   a[0][2]=5;
   a[0][3]=6;
   a[1][0]=1;
   a[1][1]=2;
   a[1][2]=4;
   a[1][3]=8;
   a[2][0]=1;
   a[2][1]=1;
   a[2][2]=1;
   a[2][3]=1;
   a[3][0]=2;
   a[3][1]=2;
   a[3][2]=2;
   a[3][3]=2;
    int all=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            all=all+sum;
            if(flag == 1)
            {
                flag=0;
                best_sum=sum;
            }
            else if(sum > best_sum)
            {
                best_sum=sum;
            }
        }
    }
    printf("highest hourglass Sum is:%d\n",best_sum);
    printf("Sum of All hourglass is:%d\n",all);
    return 0;
}