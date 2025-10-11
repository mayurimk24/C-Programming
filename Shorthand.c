#include<stdio.h>

int main()
{
    int i = 10;
    int j = 10;

    int iANS = 0 , jANS = 0;
    iANS = i++;
    jANS = ++j;

    printf("Value of i : %d\n",i);             //11
    printf("Value of iANS : %d\n",iANS);       //10

    printf("Value of j : %d\n",j);            //11
    printf("Value of jANs : %d\n",jANS);      //11
    
    return 0;
}