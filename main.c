#include <stdio.h>

int main() {
    int a[4]={1,2,3,4};
    int sum=0,*p;
    for (p=&a[0];p<=&a[4];p++)
    {
        sum += *p;
//        printf("%d\n", p);
        printf("%d", sum);
    }
//    for(int i = 0; i<4;i++)
//    {
//        printf("%d \n",a[i]);
//    }

    return 0;
}
