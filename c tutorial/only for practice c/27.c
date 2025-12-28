#include<stdio.h>
int main(){
    int n,c;
    printf("enter a number of array:");
    scanf("%d",&n);
   int arr[n];
   printf("enter a  number:");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("\nreal array:");
   for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

   for(int i=0;i<n/2;i++){
      c=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=c;
   }
   printf("\nafter the reverse the array:");
   for(int i=0;i<n;i++)
   printf("%d ",arr[i]);
   return 0;
}