#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,x1,x2,x3,x4,t,t1,t2;
   scanf("%f %f %f",&a,&b,&c);
   if(a!=0){
      float delta=b*b-4*a*c;
      t=-b/(2*a);
      if(delta<0) printf("pt vo no");
      if(delta==0){
         if(t==0) printf("no cua pt la :0");
         else if (t<0) printf("pt vo no");
         else {
            x1=sqrt(t);
            x2=-sqrt(t);
            printf("%0.1f %0.1f",x1,x2);
         }
      }
      else{
      t1=(-b-sqrt(delta))/(2*a);
      t2=(-b+sqrt(delta))/(2*a);
      if(t1==0 && t2>0){
         x1=sqrt(t1);
         x2=-sqrt(t2);
         x3=sqrt(t2);
         printf("%0.1f %0.1f %0.1f",x1,x2,x3);
      }
      else if(t2==0 && t1>0){
         x1=sqrt(t2);
         x2=-sqrt(t1);
         x3=sqrt(t1);
         printf("%0.1f %0.1f %0.1f",x1,x2,x3);
      }
      else if(t1==0 && t2<0){
         x1=sqrt(t1);
         printf("%0.1f",x1);
      }
      else if(t2==0 && t1<0){
         x1=sqrt(t2);
         printf("%0.1f",x1);
      }
      else if(t1<0 && t2<0)
      printf("pt vo no");
      else if(t1>0 && t2>0){
      x1=sqrt(t1);
      x2=-sqrt(t1);
      x3=sqrt(t2);
      x4=-sqrt(t2);
      printf("%0.1f %0.1f %0.1f %0.1f",x1,x2,x3,x4);
	  }
   }
   }
   else printf("ko phai bac 4");
   return 0;
}