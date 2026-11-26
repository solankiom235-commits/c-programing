#include <stdio.h>

int main(void) {
    int cumsum = 0;
    int n,i;
    printf("enter number n : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        cumsum = cumsum + i;
    }
    
    printf("The cumulative sum of integers %d to n is %d\n",n,cumsum);
    return 0;
}
