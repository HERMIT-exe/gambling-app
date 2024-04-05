#include<stdio.h>
#include<iostream>

float fun(float);

int main(){
float n , d,z;
printf("Give the minimum amount: ");
scanf("%f", &n);
printf("Enter the number of days: ");
scanf("%f",&d);
z=n;
for(int i=1;i<=d;i++){
    z=z+fun(z);
    printf("Day %d : %f\n",i,z);

}

}

float fun(float n) {
    float k,l,m,o,p,q,r,s,t;
    k=n/364;
    s=n+k;
    l=s/364;
    m=s+l;
    o=m*0.02;
    p=m+o;
    q=p/364;
    r=p+q;
    t=r-n;
    return t;
}
