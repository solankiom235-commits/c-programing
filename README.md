#include <stdio.h>

int main() {
    int marks ;
    printf("Enter marks: ");
    scanf("%d", &marks);  

    if (marks > 95) {
        printf("grade is a\n");
    } else if (marks > 75) {
        printf("grade is b\n");
    } else if (marks > 50) {
        printf("grade is c\n");
    } else if (marks > 35) {
        printf("grade is d\n");
    } else {
        printf("grade is f\n");
    }

    return 0;
}
