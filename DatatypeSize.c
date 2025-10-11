#include<stdio.h>

int main()
{
    char cValue = 's';
    int iValue = 11;
    float fValue = 90.34f;
    double dValue = 98.43546;

    printf("Size of charaacter is :%lu\n",sizeof(cValue));
    printf("Size of integer is :%lu\n",sizeof(iValue));
    printf("Size of float is :%lu\n",sizeof(fValue));
    printf("Size of double is :%lu\n",sizeof(dValue));

    return 0;
}