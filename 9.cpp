#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float s=5;
    int i=1;
    float res=1;
    for(;i<=n;i++){
    res=res/i;
    s+=res;
    }
    printf("%f",s);
    return 0;
}