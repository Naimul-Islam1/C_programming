#include<stdio.h>
int main(){
    int x;
    // scanning input
    scanf("%d", &x);
    // checking the condition
    if (x==0)
    {
        printf("zero\n");
    }
    else if (x > 0)
    {
        printf("postive\n");
    }
    else
    {
        printf("negative");
    }
    
    return 0;
}