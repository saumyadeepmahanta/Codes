#include<iostream>
using namespace std;
template<typename T>
T min(T *p,int n){
	int i;
	T lw=p[0];
	for(i=1;i<n;i++){
		if(p[i]<lw){
			lw=p[i];
		}
	}
	return lw;
}
int main(){
	int arr[5],i;
	printf("Enter 5 elements into integer array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int lowest=min<int>(arr,5);
	printf("Smallest element present in the integer array is %d",lowest);
	float ar[5];
	printf("\nEnter 5 elements into float array:");
	for(i=0;i<5;i++){
		scanf("%f",&ar[i]);
	}
	float lowst=min<float>(ar,5);
	printf("Smallest element present in the float array is %.2f",lowst);
	return 0;
}
