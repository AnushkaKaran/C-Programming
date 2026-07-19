#include<stdio.h>
#include<math.h>
void main()
{
  int n,i=1;
  float squareroot;
  printf("enter n:");
  scanf("%d",&n);
  while(i<=n){
    squareroot=sqrt(i);
    printf("Squareroot =%f \n",squareroot);
    i++;
  }
}