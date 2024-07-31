#include<stdio.h>
int main()
{
	int n, i;

		printf("\n\n Enter your number:\n ");
		scanf("%d", &n);
	
		int arr[n+1];
	
		for(i = 0; i <= n; i++)
		{
			arr[i] = i;
		}
	
		int max = arr[0];
	
		for(i = 0; i <= n; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];
			}
		}
			int is_prime=1;
			for(i=2;i<=max/2;i++)
			{
			if(max%i==0)
			{
				is_prime=0;
				break;
			}
		    }
		    
		    if(is_prime && max>1)
		    printf("\n It is prime number \n");
		    else 
		    printf("\n It is not prime number\n");
		    printf("-------------------------------");

	return 0;
}

