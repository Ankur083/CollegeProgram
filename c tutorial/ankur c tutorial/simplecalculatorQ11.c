# include<stdio.h>

int main()
{
    float x,y;
    printf("enter a number in x :");
    scanf("%f",&x);

    printf("enter a number in y : ");
    scanf("%f",&y);

    int operator;
    printf("press  your choice");
    scanf("%d",&operator);

    //  printf("press 1 for addition\n");
    //  printf("press 2 for subtraction\n");
    //  printf("press 3 for multiplication\n");
    //  printf("press 4 for divison\n");

     switch(operator)
     {
        case 1 :
        printf("addition is %f\n", x+y );
        break;

        case 2 :
       printf("subtraction is %f\n",x-y );
        break;

        case 3 :
        printf("multiplication is %f\n",x*y );
        break;

        case 4 :
        printf("division is %f\n",x/y );
        break;

        default :
        printf("press a valid number");
     }
     return 0;

}