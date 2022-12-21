#include<stdio.h>
int main()
{
	int n,i,key,flag=0,check=1;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements into the array:");
	for(i=0;i<n;i++)
  {
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	while(check==1)
  {
		for(i=0;i<n;i++)
    {
			if(arr[i]==key)
      {
				flag=1;
				key=key*3;
			}
		}
		if(flag==0)
    {
			printf("%d",key);
			check=0;
		}
		flag=0;
	}
}
