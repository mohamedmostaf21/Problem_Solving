#include <stdio.h>


int main()
{
     int a,b,c,x;
     double pr1 = 1;
     double pr0 = 0;
    scanf("%d %d %d %d",&a,&b,&c,&x);
    if(x <= a) {
        printf("%.12lf",pr1);
    } else if(x <= b) {
        printf("%.12lf",(double)c / (b-a));
    } else {
      printf("%.12lf",pr0);
    }

    return 0;
}
