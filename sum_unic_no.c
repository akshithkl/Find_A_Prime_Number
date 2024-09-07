#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i,j,sum;
    for(i=0;i<arr[i];i++)
    {
        for(j=0;j<arr[i];j++)
        {
            if(i==j)
            {
                break;
            }
            if(i+j==6)
            {
               
                sum=i+j;
                printf("sum=%d+%d=%d\n",i,j,sum);
            }
            
        }

    }
}