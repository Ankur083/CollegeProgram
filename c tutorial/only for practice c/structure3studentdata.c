#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=12;
    s1.cgpa=9.2;
    strcpy(s1.name,"Ankur");
    
    struct student s2;
    s2.roll=21;
    s2.cgpa=8.9;
    strcpy(s2.name,"anmol");

    struct student s3;
    s3.roll=12;
    s3.cgpa=9.2;
    strcpy(s3.name,"Atharv");

    printf("student name=%s\n",s1.name);
    printf("student roll=%d\n",s1.roll);
    printf("student cgpa=%f\n",s1.cgpa);

    printf("student name=%s\n",s2.name);
    printf("student roll=%d\n",s2.roll);
    printf("student cgpa=%f\n",s2.cgpa);

    printf("student name=%s\n",s3.name);
    printf("student roll=%d\n",s3.roll);
    printf("student cgpa=%f\n",s3.cgpa);

    return 0;
}