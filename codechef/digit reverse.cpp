#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int reversed=0;
        while(N>0){
            int last_digit=N%10;
            reversed=reversed*10+last_digit;
            N=N/10;
        }
        cout<<reversed<<endl;
    }
    return 0;
}