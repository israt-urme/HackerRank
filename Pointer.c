#include <stdio.h>

void update(int *a,int *b) {
    int temp=*a;
    *a=temp+*b;
    int temp1=*b;
    if(temp>temp1)
    {
        *b=temp-temp1;
    }
    else
        *b=temp1-temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
