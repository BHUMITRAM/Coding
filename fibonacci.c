#include<stdio.h>

int fib(int);
int main()
 {
  int n=9;
  int x=fib(n);
  printf("%d",x);
  return 0;
 }
int fib(int n)
  {
   if (n==1 || n==2)
     return  1;
   else 
     return  fib(n-1)+fib(n-2);
  }
