#include <stdio.h>
void main()
{
  int a,b;
  printf("Enter number a: ");//taking input number a from user
  scanf("%d",&a);
  printf("\nEnter number b: ");//taking input number b from user
  scanf("%d",&b);
  printf("Entered value:\n a=%d\tb=%d",a,b);/*displaying the values of a and b on screen*/
  a=a*b;
  b=a/b;//giving 'b' value of 'a'
  a=a/b;//giving 'a' value of 'b'
  
  printf("\nSwapped value:\n a=%d \t b=%d",a,b);
}
