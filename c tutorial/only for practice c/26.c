#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element in array:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements of first number:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second number:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            flag=1;
            break;
        }

    }
    if(flag==1)
    printf("Both array are different.");
    else
    printf("Both array are same.");
}