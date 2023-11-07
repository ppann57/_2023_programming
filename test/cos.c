#include <stdio.h>
#include <math.h>

int main()
{
    double x,r;

    setbuf(stdout,NULL);
    
    while(scanf("%lf", &x)!=EOF){
        r = x * 3.14159/180;
        printf("x=%f, cos = %lf\n", x, cos(r));
    }
 }
