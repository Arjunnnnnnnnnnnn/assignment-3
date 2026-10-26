#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};
 
int main(void) {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter roll, name and marks; ");
        scanf("%d %s %f", &s[i].roll_no, s[i].name, &s[i].marks);

    }
    
    for (i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    return 0;
}   
