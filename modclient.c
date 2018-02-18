#include<stdio.h>
void mod100(int *);
void mod200(int *);
int main()
{
int x;//to test modules100
int y;//to test module200
mod100(&x);
mod200(&y);
printf("Value of x=%d\n Value of y=%d\n",x,y);
return 0;
}

