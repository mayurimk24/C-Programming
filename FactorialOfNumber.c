#include<stdio.h>

int main()
{
    int n=4,ANS;
    ANS = n;
    for(int i=--n; i>0; i-- ){
        ANS = ANS*i;
    }
        printf("%d",ANS);
        return 0;
}