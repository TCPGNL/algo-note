#include<iostream>
using namespace std;
int main()
{
    int a[5]={3,1,4,2,5};
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<5-i;j++)
        // Ã°ÅÝÅÅÐò
       if(a[j]>a[j+1])
       {
           int temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
       }
    }
for(int i=0;i<5;i++)
{
    cout<<a[i];
}
    return 0;
}

