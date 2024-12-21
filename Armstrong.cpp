#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, r,pw=0;
    cin >> n;
    int tmp=n;
    while(tmp!=0){
    pw++;
    tmp=tmp/10;
    }
    tmp = n;
    while(tmp!=0){
    r+=pow(tmp%10,pw);
    tmp=tmp/10;
    }
    
    if (n==r) cout<< "Armstrong" << endl;
    else cout << "Not Armstrong" << endl;
    
 }