#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, r;
    cin >> n;
    int p=n;
    while(n!=0){
    r=(r*10)+(n%10);
    n=n/10;
    }
    if (p==r)cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
 }