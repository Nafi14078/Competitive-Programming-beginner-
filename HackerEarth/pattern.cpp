#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=i;j<n;j++){
                cout<<"#";
            }
            for(int j=i;j<n;j++){
                cout<<"#";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}