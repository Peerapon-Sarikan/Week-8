#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    struct profile {
        char name[100];
        int age;
        float score;
    } s[3];
     for (i = 1; i < 4; i++) {
        printf("Student %d's\n", i);
        printf("\t name: ");
        scanf("%s", s[i].name);
        printf("\t age: ");
        scanf("%d", &s[i].age);
        printf("\t score: ");
        scanf("%f", &s[i].score);
}
        for (i = 1; i < 4; i++) {
            printf("Student %d's name is %s, age %d.\n", i, s[i].name, s[i].age);
        }
     return 0;
    }