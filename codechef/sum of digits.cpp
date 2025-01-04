#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n;
        cin>>n;
        while(n>0){
            int last_digit=n%10;
            sum=sum+last_digit;
            n=n/10;
            
        }
        cout<<sum<<endl;
    }
    return 0;
}