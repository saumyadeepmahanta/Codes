#include<stdio.h>

int main()
{
	int n,i;
	printf("enter no. of inputs:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
	int count=inc_subarray(arr,n);
	printf("\nthere are %d increasing subarray and are mentioned above",count);
	return 0;
}
int inc_subarray(int *a,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
    {
		if(i==n-1)
            {
                break;
            }
		else if(a[i+1]>a[i])
        {
			int j=i;
			while(a[j+1]>a[j] && j<n-1)
            {
				count++;
				if(j<n-1)
                    {
                        j++;
                    }
				int k;
				for(k=i;k<=j;k++)
                    {
                        if(k==i)
                            {
                                printf("{%d,",a[k]);
                            }
                        else if(k==j)
                            {
                                printf("%d},",a[k]);
                            }
                        else
                            {
                                printf("%d,",a[k]);
                            }
                    }
			}
		}
	}
	return count;
}
