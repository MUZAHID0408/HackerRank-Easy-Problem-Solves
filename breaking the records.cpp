// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int g[num];
    for(int i = 1; i<= num; i++){
        cin>>g[i];
    }

    int res[2] = {0, 0}, max[2], min[2];
    max[1] = g[1];
    min[1] = g[1];
    
 for(int i = 1; i<= num; i++){
        if(min[1] > g[i] && i>= 2 ){
            min[1] = g[i];
            res[1]++;

        }

        if( max[1] < g[i] && max[1] != g[i] &&i >=2){
            max[1] = g[i];
            res[0]++;
        }

       

    }
    for(int i = 0; i<2; i++){
        cout<<res[i]<<" ";
    }

}
