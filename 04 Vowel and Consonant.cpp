#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    c=tolower(c);
    
    switch(c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout << "Vowel" << endl;
    break;
    
    default :cout << "Consonant" << endl;
    break;
    }
    
    
 }