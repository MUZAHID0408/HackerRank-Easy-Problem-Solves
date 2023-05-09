#include<bits/stdc++.h>
using namespace std;
const int N = 10000;
int main(){
    int x1, v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;
    char y[] = {"YES"};
    char n[] = {"NO"};
    int k1 = (x1 + v1), k2 = (x2 + v2);
    int i;
    for(i = 0; i<N; i++){
        if(k1 == k2){
            puts(y);
            break;
        }

        k1 += v1;
        k2 += v2;
    }
    if(i ==N){
        puts(n);
    }
    return 0;
}