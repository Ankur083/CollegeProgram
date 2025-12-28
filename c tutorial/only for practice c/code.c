// #include<stdio.h>
// #include<string.h>

// struct address{
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// struct address adds[5];

// int main(){
//     printf("enter data of person 1:");
//     scanf("%d",&adds[0].houseNo);
//     scanf("%d",&adds[0].block);
//     scanf("%s",adds[0].city);
//     scanf("%s",adds[0].state);

//     printf("enter data of person 2:");
//     scanf("%d",&adds[1].houseNo);
//     scanf("%d",&adds[1].block);
//     scanf("%s",adds[1].city);
//     scanf("%s",adds[1].state);

//     printf("enter data of person 3:");
//     scanf("%d",&adds[2].houseNo);
//     scanf("%d",&adds[2].block);
//     scanf("%s",adds[2].city);
//     scanf("%s",adds[2].state);

//     printf("enter data of person 4:");
//     scanf("%d",&adds[3].houseNo);
//     scanf("%d",&adds[3].block);
//     scanf("%s",adds[3].city);
//     scanf("%s",adds[3].state);

//     printf("enter data of person 5:");
//     scanf("%d",&adds[4].houseNo);
//     scanf("%d",&adds[4].block);
//     scanf("%s",adds[4].city);
//     scanf("%s",adds[4].state);

//     printaddress(adds[0]);
//     printaddress(adds[1]);
//     printaddress(adds[2]);
//     printaddress(adds[3]);
//     printaddress(adds[4]);
//     return 0;
// }
#include<stdio.h>
void mystery(int *ptra, int *ptrb)
{
int *temp;
temp = ptrb;
ptrb = ptra;
ptra = temp;
}
int main(){
int a=2022, b=0, c=4, d=42; 
mystery(&a, &b);
if (a < c)
mystery(&c, &a); 
mystery(&a, &d);
printf("%din", a);
return 0;
} 
// void count(int n)

// { int d=1;

// printf("%d ", n);
// printf("%d ", d);

// d++;

// if(n>1) count(n-1);

// printf("%d ", d);

// }

// void main()

// { count(2); 

// }
