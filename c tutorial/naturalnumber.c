# include<stdio.h>
#include<math.h>
int main(){
float x;
printf("enter a  number:");
scanf("%f",&x);
if(x>0 && x-floor(x)==0){
    printf("the number is natural number");
}
else                                                                                
{
    printf("the number is not a natural number");
    }

return 0;
}