#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("the value of a is the largest value");
    }
    else if(b>=a && b>c){
        printf("the value of b is the largest value");
        
        }
        else{
            printf("the value of c is the largest value");
        }
        return 0;


    }

