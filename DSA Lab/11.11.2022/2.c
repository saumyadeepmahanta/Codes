#include <stdio.h>
int main()
   {
      int ar[100],i,f,sn,lb,hb,mid,n,j,tmp;
      printf("How many nos ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
	     {
	       printf("Enter No. ");
	       scanf("%d",&ar[i]);
	     }
       for(i=1;i<n;i++)
         {
           for(j=0;j<n-i;j++)
             {
               if(ar[j]>ar[j+1])
                 {
                   tmp=ar[j];
                   ar[j]=ar[j+1];
                   ar[j+1]=tmp;
                 }
             }
         }

      printf("Enter No. to be searched ");
      scanf("%d",&sn);
      f=0;
      lb=0;
      hb=n-1;
      while(lb<=hb)
	      {
	         mid=(lb+hb)/2;
	        if(ar[mid]==sn)
	          {
	            f=1;
	            printf("Found ");
	            break;
	          }
	        if(sn < ar[mid])
	         hb=mid-1;
	       else
	         lb=mid+1;
	}
      if(f==0)
	printf("Not Found");
  return 0;
}
