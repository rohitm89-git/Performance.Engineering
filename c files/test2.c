#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//a function that returns a pointer
int returnValue(int* x){
    *x *= 5;
    return *x;
}

char *returnPointer(char s[]){
    return &s;
}

//we are learning pointers here
void main(){
    int a = 5;
    int* pa = &a;
    //puts(a);
    printf("value held at pa %X is: %d", pa,*pa);
    int b = returnValue(pa);
    printf("\n value from function is %d", b);
    printf("\n value of a is %d", a);

    char str1[] = "hello world";
    //char* pstr1 = returnPointer(str1);
    printf("\n %X", returnPointer(str1));
}

