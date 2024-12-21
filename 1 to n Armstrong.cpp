#include <bits/stdc++.h>
using namespace std;
bool Armstrong(int x){
    
    int tmp,pw =0,r,sum =0;
    tmp=x;
    while (tmp!=0){
    tmp/=10;
    pw++;
    }
    
    tmp=x;
    while(tmp!=0){
    r=tmp%10;
    tmp/=10;
    sum+=pow(r,pw);
    }
    if(sum==x) return true;
    else return false;
}

int main(){
    int n;
    cin>> n;
    for(int i=1;i <=n; i++){
    if(Armstrong(i))cout << i << endl;
    //else cout << "Not Armstrong" << endl;
    }
 }