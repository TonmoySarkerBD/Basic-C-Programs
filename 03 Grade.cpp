#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m<0||m>100){
    cout << "Invalid Mark" << endl;
    return 1;
    }
    
    switch(m/10){
    case 10: cout << "Golden A+" << endl;
    break;
    case 9: cout << "A+" << endl;
    break;
    case 8: cout << "A" << endl;
    break;
    case 7: cout << "B" << endl;
    break;
    case 6: cout << "C" << endl;
    break;
    case 5: cout << "D" << endl;
    break;
    default :cout << "F" << endl;
    break;
    }
    
    
 }