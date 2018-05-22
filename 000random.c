#include <stdio.h>

int main(){
    int length,size;
    char  carac[]="0123456789ABCDEFGHIJKLMNOPQRSTUVXZWYabcdefghijklmonpqrstuvxwyz";
    length=sizeof(carac);
    srand((unsigned int) time(0) + getpid());
    size=rand()%length+6;
    (size) >= 15 ? (size = rand()%15+6) : size;
    printf("User: ");
    while(size--){
        putchar(carac[rand()%(length)]);
        srand(rand());
    }
    printf("\n");
    return 1;
}
