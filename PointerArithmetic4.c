#include<stdio.h>

int main()
{
    // int Arr[] = {11,21,51,101,111};
    
    // int *p = NULL;
    // int *q = NULL;

    // p = &(Arr[1]);
    // q = &(Arr[4]);
    
    // printf("Result of substraction is : %ld\n ",q-p);  //Allowed
    
    // q = q - 2;

    // printf("Data pointed by q is : %d\n ",*q);  //Allowed

  //  printf("\n\n\n");

    float arr[]={10.3,43.4,45.34,234.45};
    float *p = NULL;
    float *q = NULL;

    p= arr;
    q = &(arr[3]);

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%f\n",*q);
    printf("%f\n",*p);
    printf("%f\n",*(p+2));
    printf("%f\n",*(p+1));
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%f\n",0[arr]);
    printf("%d\n",q-p);
    printf("%f\n",*(q-2));
    
    return 0;
}