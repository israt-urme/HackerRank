#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double c;
    char str2[10000];

    scanf("%d",&j);
    scanf("%lf",&c);
    scanf(" %[^\n]",str2);

    printf("%d\n",i+j);
    printf("%0.1lf\n",d+c);
    printf("%s%s\n",s,str2);
    return 0;
}
