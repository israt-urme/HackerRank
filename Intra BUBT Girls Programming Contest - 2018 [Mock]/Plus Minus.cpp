#include<bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int arr[n],i;
    for (i = 0; i < n;i++) {
       scanf("%d",&arr[i]);
    }
    float sum=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            sum=sum+1;
            cout<<sum<<endl;
        if(arr[i]<0)
            sum1=sum1+1;
        if(arr[i]==0)
            sum2=sum2+1;
    }
    printf("%.6lf\n",sum/n);
    printf("%.6lf\n",sum1/n);
    printf("%.6lf\n",sum2/n);
    return 0;
}

