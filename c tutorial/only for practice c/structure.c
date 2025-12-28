#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.cgpa=9.3;
    s1.roll=1664;
    // s1.name="Ankur";
    strcpy(s1.name,"Ankur");

    printf("student name=%s\n",s1.name);
    printf("student roll=%d\n",s1.roll);
    printf("student cgpa=%f\n",s1.cgpa);
    return 0;
}