#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "math.h"
#define pi 3.14

void main(){
    int a;
    char email[20] = "he@g.com";
    char x[] = "123bas";
    int arr[5] = {1,2,4};
    printf("Testing assignment suppression >>>> \n");
//    scanf("%*[\n]%*c%d",&a);
//    printf("user i/p is: %d \n",a);
    //scanf("%^[A-Za-z][A-Za-z0-9\.#]*@[a-z0-9]*\.com?",email);
//    scanf("%^[a-z][A-Za-z0-9]",email);
//    printf("user email is: %s",email);

printf("length and size of string : %d and %d", strlen(email), sizeof(email));
printf("\n length and size of string : %d and %d", strlen(x), sizeof(x));

printf("\n %d",floor(1.4));
printf("size and len is %d, %d, %d", sizeof(arr), sizeof(arr)/sizeof(int), arr[3]);
}
