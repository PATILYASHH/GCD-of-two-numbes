#include<stdio.h>
int  main()
{
  int a , b , r  ;
  
  restart:
  
  printf("Enter value of a : ");
scanf("%d",&a);
  
  printf("Enter value of b : ");
 scanf("%d",&b);

int c = b;
  int d = a;
  
if(a >= b)
{
  
  while(c != 0)
    {
      r  =  d % c;
      d = c ;
      c = r;
    }
  printf("GCD of %d and %d is %d ",a,b,d);
}
else
{
  printf("Pleese make a greater than or equals to b ");
printf("\n\n");
  goto restart;
}
  return 0;
}


