#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    char name[3][10];
    printf("names?\n");
    for(i=0;i<3;i++){
        scanf("%s",&name[i]);
    }
    printf("\nnames are:\n");
    for(i=0;i<3;i++){
        printf("%s\n",name[i]);
    }
    getch();
}