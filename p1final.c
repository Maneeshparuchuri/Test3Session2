#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the numerator of 1st number:\n");
  scanf("%d",num1);
  printf("enter the denominator of 1st number:\n");
  scanf("%d",den1);
   printf("enter the numerator of 2nd number:\n");
  scanf("%d",num2);
  printf("enter the denominator of 2nd number:\n");
  scanf("%d",den2);
  }
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3 = (num1 * den2 + den1 * num2);
  *den3 = den1 * den2;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("after the addition we get: %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1, num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
  }