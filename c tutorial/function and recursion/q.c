// #include<stdio.h>
// int main(){
//     int i=5;
//     while(i--)
//     {
//         int i=100;
//         i--;
//         printf("%d\n",i);

//     }
//     return 0;
}
#include<stdio.h>

int main()
{
    char check='a';
    switch (check)
    {
      case'a'||1: printf("gates");
      case'b' ||2:printf("quiz");
      break;
      default: printf("gatequiz");
    }
    return 0 ;
}