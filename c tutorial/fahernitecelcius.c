#include <stdio.h>

int main()
{
    printf("enter the temperature in fahernite \n");
    float fahernite, celcius;
    scanf("%f", &fahernite);

    celcius = (fahernite - 32) * 5/ 9;
    //printf("temperature in celcius : %f\n", (fahernite-32)*5/9
    printf("%0.2f",celcius);
    return 0;
}