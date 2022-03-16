#include <stdio.h>
int input_side()
{
  int a;
  printf("enter side of triangle\n");
  scanf("%d",&a);
  return 0;
}
int check_scalene(int a,int b,int c) 
{
  int isscalene;
 if(a!=b && a!=c && b!=c)
 {
  isscalene=1; 
 }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("it is scalene triangle");
    }
  else
  {
    printf("it is not a scalene triangle");
}
  }
int main()
{
 int a,b,c,isscalene;
 a=input_side();
 b=input_side();
 c=input_side();
 isscalene=check_scalene(a,b,c);
 output(a,b,c,isscalene);
 return 0;
}