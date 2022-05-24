#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    double ci;
    scanf("%d%d%d",&p,&r,&t); 
    ci=p*pow(1+(r/(100*1.0)),t);
    printf("%.2lf",ci);
}