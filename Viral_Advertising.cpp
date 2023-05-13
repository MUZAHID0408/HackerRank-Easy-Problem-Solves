#include<bits/stdc++.h>
using namespace std;   

int main(){
    int n,comulative = 0, s_num;
    cin>>n;
    for(int i = 0; i< n; i++){
        if(i == 0) s_num = 5;
        int x = floor(s_num/ 2);
        s_num  = x*3;
        comulative += x;

    }
    cout<< comulative;
}
 