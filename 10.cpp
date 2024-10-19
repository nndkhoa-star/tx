#include <stdio.h>
#include <conio.h>
int main()
{
int n, k, S;
for (n=1; n<1000; n++){
S=0;
for (k=1; k<=n/2; k++){
if (n%k==0) S+=k;
}
if (S==n) printf("\n%d", n);
}
getch();
}
