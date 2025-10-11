#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
   int no;
   float marks;
   struct Demo dobj;   //Nested
};

int main()
{
   printf("size of hello structure is :%d",sizeof(struct Hello)); //16
   return 0;
}