#include<stdio.h>
int main(){
    //taking non-negative integers using unsigned int
    unsigned int a;
    //user input
    scanf("%u", &a);
    // condition of checking even/odd number;
    if (a%2 == 0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }

    return 0;
}