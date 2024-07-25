#include <stdio.h>
int main(){

int rows;
printf("Enter the number of rows : ");
scanf("%d",&rows);

for(int i=1;i<=2*rows-1;i++){
 for(int j=1;j<=i;j++){
  printf("%d ",i);
 }
  printf("\n");
}
// output
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7
// 8 8 8 8 8 8 8 8
// 9 9 9 9 9 9 9 9 9
// 10 10 10 10 10 10 10 10 10 10
// 11 11 11 11 11 11 11 11 11 11 11


}