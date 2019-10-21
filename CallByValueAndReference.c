#include <stdio.h>
void call_value(int,int);
void call_reference(int*,int*);

int main()
{
    int a = 10, b = 20;
    call_value(a, b);
    printf("In Main after Call by value a=%d b=%d\n",a,b);
    int c=10,d=20;
    call_reference(&c,&d);
    printf("In main after Call by reference c=%d d=%d\n",c,d);
    return 0;
}


void call_value(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("In Function Call by value x=%d y=%d\n",x,y);
}
void call_reference(int* e, int* f)
{
    int t;
    t = *e;
    *e = *f;
    *f = t;
    printf("In Function Call by reference e=%d f=%d\n",*e,*f);
}
