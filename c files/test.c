#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define pi 3.14

//  this is a function - has to be placed before main if there is no prototype defined
    void foo(int x){
        printf("inside foo %d", x);
    }

void main(){
    char x = 'x';
    char arr[] = "hell0";
    int arr1[] = {1};

    printf("size of arr1 is %d and length of array is %d",sizeof(arr1), sizeof(arr1)/sizeof(int));
    printf("\n string is %s and size of string is %d", arr, sizeof(arr));
    printf("\n length of arr is: %d", strlen(arr));

    int* a = 5;
    float a1 = 43.678;
    bool flag = true; //need to import stdbool.h
    printf("\n %d",a);
    printf("\n %.1f",a1);
    printf("\n %c", arr[2]);
    printf("\n%d",flag);

    printf("\n what is your name? ");
    scanf(" %s", &arr);
    printf("\n%s",arr);

    printf("\n%d", 1<2);
    1>2?printf("\ntrue"):printf("\nfalse");

//    single character i/p - getchar() and putchar() not working
/*     char c;
 *     printf("\nEnter a character: ");
 *     c = getchar();
 * //    printf("\n %c",c);
 *     putchar(c);
 */

// assignment suppression;
// gets an puts not working it seems
    int a2 = 5;
    char str1[10], str2[10];
    printf("\n Enter a number: ");
    scanf(" %*d",&a2);
    printf("\n %2d",a2);
    printf("\n Enter value for str1: ");
    scanf(" %[^\nabc]", &str1); // what is the diff between %[^\nabc] and %[^\nabc]%*c
//    scanf(" %[^\n]", &str2);
    printf("\n str1 : %s \n", str1);
//    printf("\nenter str2:");
//    gets(str2);
//    puts(str2);

//  calling foo function
    foo(5);

// string functions - strlen, strnlen, strcmp, strncmp, strcat, strncat, strcpy, strchr, strstr,
    printf("\n %s", strchr("hello",'l'));


}
