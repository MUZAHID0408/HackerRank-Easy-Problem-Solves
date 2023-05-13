#include<bits/stdc++.h>
using namespace std;   
int rev(int a){
    int rev = 0,num = 10;
    while(a != 0){
         num = a % 10;
        rev = rev*10 + num;
        a = a/ 10;
    }
    return rev;
}

int main(){
    double i, j, k;
    int count = 0;
    cin>>i >> j >> k;
    for (int m = i; m <= j; ++m)
    {
       double x = abs((m-rev(m)))/k;   
        float y = floor(x);
        float sub = x-y;
        if(sub == 0) count++;
    }
    cout<< count;
}
 