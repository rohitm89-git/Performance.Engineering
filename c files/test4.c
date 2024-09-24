#include <stdio.h>
#include <conio.h>

void main(){
    char str[] = "020;338;04/03/2018";
    char* token;
    int i = 1;
    token = (char*)strtok(str,";");
    printf("Token %d is %s\n",i,token);

    while(token != NULL){
        i +=1;
        token = (char*)strtok(NULL,";");
        printf("Token %d is %s\n",i,token);
    }
}
