//3)Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values. 
#include<stdio.h>
int main()
{
int age=20;
char name[20]="diya";
float percentage=67.45;
const pi=3.14;
printf("Enter age:");
scanf("%d",&age);
printf("Enter name:");
scanf("%c",&name);
printf("Enter percentage:");
scanf("%f",&percentage);
printf("Enter pi:");
scanf("%f",&pi);
}

