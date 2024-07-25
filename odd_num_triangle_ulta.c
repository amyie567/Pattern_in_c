#include<stdio.h>
int main(){

int n;
printf("Enter np. of rows : ");
scanf("%d",&n);
int a=n;
for(int i=1;i<=n;i++){

  for(int j=1;j<=2*a-1;j+=2){
    printf("%d ",j);
    
  }
  a--;
  printf("\n");
}




}