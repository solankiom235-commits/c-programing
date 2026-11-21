#include <stdio.h>

int main()
{
    int a, i = 1 , c ; 
     
     printf("enter a number a : ");
     scanf("%d",&a);
     
     while(i<=10)
     
     {
         c = a * i ;
         printf("%d\n",c);
         i++;
     }
    
    

    return 0;
}
