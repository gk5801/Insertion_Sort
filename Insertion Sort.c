#include <stdio.h>
int main() 
{
	int n,a,b,temp,i,j,arr[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	  {
             temp=arr[i];
             j=i-1;
             while((temp<arr[j])&&(j>=0))
             {
                arr[j+1]=arr[j];
                j=j-1;
             }
             arr[j+1]=temp;
         }
      for(i=0;i<n;i++)
      printf("%d \n",arr[i]);
    return 0;
}