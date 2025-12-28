#include<stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
int main()
{
    float a;
    float b;
    
// printf("enter a side:");
// scanf("%f",&side);
// printf("Area is %f",squareArea(side));

// printf("enter a number");
// scanf("%f",&rad);
// printf("area is %f",circleArea(rad));

printf("enter a number:\n");
scanf("%f%f",&a,&b);
 rectangleArea( a,b);
// printf("Area is %f",rectangleArea(a,b));
return 0;
}
// float squareArea(float side){
// return side*side;
// }
// float circleArea(float rad){
    // return 3.14*rad*rad;
// }
float rectangleArea(float a,float b){
    float Area=a*b;
    printf("Area is %f",Area);
    return 0;
}
