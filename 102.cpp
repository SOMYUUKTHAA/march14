#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    while(n%2==0)
    {
        n=n/2;
        cout<<"\t"<<n;
    }
    if(n%2==1)
    {
        cout<<n;
    }
}
