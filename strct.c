#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;
    };
    struct person p1={20,"Abc",40.4};
    printf("age is %d\n",p1.age);
    printf("name is %s\n",p1.name);
    printf("marks is %.2f",p1.marks);
      return 0;
    }