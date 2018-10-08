#include<iostream>

using namespace std;

int main()
{
    int arr[64];
    int t,n,m;
    cin>>t;
    int na[t];
    for(int j=o;j<t;j++){

    cin>>n;
    int i=0;
    while(n>0){
        if(n%2==0){
            arr[i]=0;
            i++;
        }
        else if(n%2==1){
            arr[i]=1;
            i++;
        }
        n=n/2;
    }
    arr[j]=i-1;

    }

    return 0;
}
