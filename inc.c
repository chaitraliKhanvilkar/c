#include<stdio.h>
int main(int argc,char *argv[])
{
int a=10;
int b=-10;
printf("%d,%d,%d",++a,a++,++a);
printf("\n%d",a+b);
printf("\n%d,%d",--b,b--);
int j=b++;
printf("\n%d,%d",b--,++j);
printf("\n%d",a%b);
printf("\n%d", a/b);
((a<b)<++a ? printf("\nmin=%d",a) : printf("\nmax=%d",a));
if(a==b||a!=b)
    printf("\nLOGICAL OPERATOR IS WORKING");
else if(a==b&&a!=b)
    printf("\nINVALID");
else
    printf("\nINCORRECT OPERATOR");
printf("\n%d,%d",a|b,a&b);
return 0;
}
