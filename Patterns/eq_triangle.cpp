#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =5;
    for(int i=1;i<=count;i++){
    for(int space=0;space<count-i;space++){
        cout<<" ";
    }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
    cout<<endl;
    }
}