#include <stdio.h>
#include <string.h>

int main()
{
    int i; 
    int maxindex = 0;

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
          for (i = 1; i < 4; i++) {
        if (s[i].score > s[maxindex].score) {
            maxindex = i;
        }
    }
        printf("The highest score belongs to %s at %.1f scores!", s[maxindex].name, s[maxindex].score);
     return 0;
    }