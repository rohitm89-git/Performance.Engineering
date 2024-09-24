#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10
#define MIN 2

void main(){
    char dob[3]; //need to declare the size but expands automatically to accommodate all of input
    long int x;
    int y;
    printf("Enter your DOB \n");
    scanf(" %s", &dob);
    printf("Entered value is %s",dob);
    printf("Value in 2nd index is: %c", dob[1]);
    printf("\n Difference between Max and Min: %d", MAX-MIN);
    printf("\n Size of datatype x,y,dob is %d,%d,%d,%d", sizeof(x), sizeof(y), strlen(dob), sizeof(dob));
    printf("\n Enter number:");
    scanf(" %d",&x);
    printf("Lowest number is: %d",getLowestNumber(x));
    y = 5;
    testPointers(y);
    testMalloc();
    testIO();
}

int getLowestNumber(int number){
    return number > MIN && number < MAX ? number : MIN;
}

void testPointers(int y){
    int y1 = y;
    int* py1 = &y1;
    int* py = &y;
    printf("\n value of y1,py1,py is %d,%p, %p",y1,py1,py);
}

void testMalloc(){
    int arr;
    //printf("\nSize of arr is %d", sizeof(arr));
    arr = (int*)malloc(10 * sizeof(int));
    printf("\nSize of arr after allocation is %d,%d,%d \n\n", sizeof(arr),sizeof(int),strlen(arr));
}

void testIO(){
    FILE *ptvar;
    char buf[20];
    ptvar = fopen("sample.txt","a+"); // need to use a+ for reading as well
    if(ptvar != NULL){
        fprintf(ptvar,"\nThis is sample file");
        fprintf(ptvar,"\n%p",ptvar); // prints out mem location
        fseek(ptvar,0,SEEK_SET); // brings back pointer to beginning of file
        printf("\n Current position of ptvar %d",ftell(ptvar));
        /** this uses fgets */
//        while(fgets(buf,20,ptvar)){ // reads the line
//            printf("%s", buf);
//        }
        /** this uses fscanf */
        printf("Printing using fscanf \n");
        while(fscanf(ptvar,"%s",buf) == 1){ // reads until a space is encountered
            printf("%s\n",buf);
        }

    }

    fclose(ptvar);

}
