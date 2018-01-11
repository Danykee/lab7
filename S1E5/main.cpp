#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *a,i,sum;
    float floating_point;
    sum=0;
    a=(int*)malloc(25*sizeof(int));
    for(i=0;i<=50;i++)
        cout<<a[i];
    for(i=0;i<=50;i++)
        sum=sum+a[i];
    floating_point=(float)sum/50;
    cout<<"The sum is:"<<sum;
    cout<<"The average is:"<<floating_point;
}
