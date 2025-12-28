# include<stdio.h>

int main()
{
    int n;
    while(1)
    {   
        printf("enter a number :");
        scanf("%d",&n);

        if(n % 2 != 0)
        { 
            break;
        }
            else
        {     
            printf("number is even\n");
        } 
    }   
    printf("thank you"); 

    return 0;
}