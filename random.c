#include<stdlib.h>
#include<time.h>
#include<stdio.h>
typedef unsigned int ui;

struct stu{
    char name[10];
    int id;
    char sex;
};


int main(void){
    ui y;
    y = rand();
    printf("%u\n",y);
    FILE* f;
    char h;
    f = fopen("D:/rand。txt", "r");
    if(f==NULL){
        printf("adw\n");
    }
    while((h=fgetc(f)!=EOF))
    return 0;
}



