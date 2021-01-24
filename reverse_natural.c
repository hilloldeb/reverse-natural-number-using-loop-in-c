#include<stdio.h>

int main(){
    int i, n;

    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("The reverse natural number from 1 to %d is\n",n);

    for(i = n; i ; i--){
        printf("%d\n", i);
    }
    return 0;
}
