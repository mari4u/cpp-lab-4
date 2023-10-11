#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n] ;
    for (int i=0;i<n;i++) {
        a[i]=i+1;
    }
    
    
    if (n%4==0) {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;  //Petya
        for (int i=0;i<n/2;i+=2) {
            cout<<a[i]<<" ";
        }
        for (int i=n-1;i>=n/2;i-=2) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<n/2<<endl; //Masha
        for (int i=1;i<n/2;i+=2) {
            cout<<a[i]<<" ";
        }
        for (int i=n-2;i>=n/2;i-=2) {
            cout<<a[i]<<" ";
        }
    }
    else if (n%4==3) {
        cout<<"YES"<<endl;
        cout<<(n+1)/2<<endl; //Petya
        for (int i=0;i<(n-1)/2;i+=2) {
            cout<<a[i]<<" ";
        }
        for (int i=n-2;i>=(n-1)/2;i-=2) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<(n-1)/2<<endl; //Masha
        for (int i=1;i<(n-1)/2;i+=2) {
            cout<<a[i]<<" ";
        }
        for (int i=n-3;i>=(n-1)/2;i-=2) {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1];
    }
    else {
        cout<<"NO";
    }
    return 0;
}

