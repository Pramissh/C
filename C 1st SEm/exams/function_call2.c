// CALL BY REFERENCE

#include<stdio.h>
void swap(int* , int*);
void main()
{
  int x=10, y=15;
  printf("Values before swap: X=%d and Y=%d",x,y);
  swap(&x,&y);
  printf("/n After swap: X=%d and Y=%d",x,y);
  getch ();  
}
void swap (int *a, int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;  
}