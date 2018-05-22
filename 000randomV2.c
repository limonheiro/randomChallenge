#include <stdio.h>
void geration(int caracter[]);
void hash(int *size, int caracter[], int *length);
int main(){
    int caracter[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,48,49,50,51,52,53,54,55,56,57,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    geration(caracter);
}
void geration(int caracter[]){
    int length=sizeof(caracter);
    int size;

    srand((unsigned int) getpid());
    size = rand()%length+10;
    size>10 ? size=rand()%10+10:size;
    printf("user: ");
    hash(&size,caracter, &length);

    printf("password: ");
    srand((unsigned int) time(0) + getpid());
    size = rand()%length+2;
    hash(&size, caracter, &length);
}
void hash(int *size, int caracter[], int *length){
    while(*size--){
        printf("%c",caracter[rand()%caracter[*length]]);
        srand();
    }
    printf("\n");
}
