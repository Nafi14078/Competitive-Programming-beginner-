#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(i>=10){
        
        if(i%2==0){
            cout<<"even"<<endl;
            
        }
        else{
            cout<<"odd"<<endl;
        }
        }
        else if(i<10){
            if(i==0){
                cout<<"zero"<<endl;
            }
             if(i==1){
                cout<<"one"<<endl;
            }
             if(i==2){
                cout<<"two"<<endl;
            }
             if(i==3){
                cout<<"three"<<endl;
            }
             if(i==4){
                cout<<"four"<<endl;
            }
             if(i==5){
                cout<<"five"<<endl;
            }
             if(i==6){
                cout<<"six"<<endl;
            }
             if(i==7){
                cout<<"seven"<<endl;
            }
             if(i==8){
                cout<<"eight"<<endl;
            }
             if(i==9){
                cout<<"nine"<<endl;
            }
            
        }
            
        
    }
    
}
    