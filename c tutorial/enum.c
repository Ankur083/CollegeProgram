#include<stdio.h>

  enum week {sunday=1,monday,tuesday,wednesday=15,thursday,
  friday,saturday};  
int main()
{
    enum week days;
       days=thursday;
         printf("day%d\n",days);

        days=tuesday;
        printf("day%d\n",days);

        days=saturday;
        printf("day%d\n",days);
    return 0;
}

