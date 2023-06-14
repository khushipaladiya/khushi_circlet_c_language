#include<stdio.h>
#include<conio.h>

void main(){
int i;
int j;
int k=11;
clrscr();
 for(i=1;i<=5;i++){
  for(j=1;j<=i;j++){
   printf("%d ",k);
   k++;
  }
  printf("\n");
 }
getch();
}