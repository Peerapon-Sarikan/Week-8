#include<stdio.h>
#include<string.h>
int main()
{
struct income {
float salary;
float bonus;
int age;
};
struct income people1;
people1.salary = 16000;
people1.bonus = 40000;
people1.age = 23;
return 0;
}