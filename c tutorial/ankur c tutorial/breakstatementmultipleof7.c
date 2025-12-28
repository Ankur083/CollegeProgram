   #include<stdio.h>

int main()
{
    int n;
    while(1)
    {
        printf("enter a number : ");
        scanf("%d",&n);
         
         if(n % 7 ==0)
         {
            break;
         }
         else
         {
            printf("enter number is not multiple of 7\n");
         }
    }     
        printf("thank you");
    
        return 0;
}