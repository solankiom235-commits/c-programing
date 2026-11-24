#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 2;  
    while(n >= i){
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}
