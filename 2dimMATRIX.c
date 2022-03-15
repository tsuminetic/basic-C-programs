#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,a[4][3];
    //lrscr();
    printf("Enter your matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nYour matrix is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    } 
    getch();
}