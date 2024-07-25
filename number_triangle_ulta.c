#include <stdio.h>
int main(){

int rows;
printf("Enter the number of rows: ");
scanf("%d",&rows);

int a=rows;
for(int i=1;i<=rows;i++){
  for(int j=1;j<=a;j++){
printf("%d ",j);
  }
  a--;
  printf("\n");
}




}