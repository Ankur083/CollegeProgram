#include<stdio.h>

int main(){
    int m,n,p,q;
    
    printf("enter the number of row of first matrix:");
    scanf("%d",&m);

    printf("enter a number of column of first matrix:");
    scanf("%d",&n);

    printf("enter a number of row of second matrix:");
    scanf("%d",&p);

    printf("enter a number of column of second matrix:");
    scanf("%d",&q);

    if(m!=p||n!=q){
        printf("matrix adding is not  possible");
        return 1;
        
    }
    
  int arr1[m][n],arr2[p][q],result[m][n];
    printf("enter the %d element for first matrix",m*n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // printf("arr1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);

        }
    }
    printf("enter the %d element for second matrix",p*q);
    for(int i=0;i<p;i++){
         for(int j=0;j<q;j++){
            // printf("arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
       }
    }
  for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
  }
  printf("The sum of matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}