
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int f[5] = {0, 0, 0, 0, 0};
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            f[0]++;
        }
        else if(a[i] == 2){
            f[1]++;
        }
        else if(a[i] == 3){
            f[2]++;
        }
        else if(a[i] == 4){
            f[3]++;
        }
        else{
            f[4]++;
        }

    }

int max = f[0];
    for(int i = 0; i<5; i++){
        if(max < f[i]){
           max = f[i];
        }


    }

if(f[0] == max){
    cout<<"1";
}

else if(f[1] == max){
    cout<<"2";
}
else if(f[2] == max)
{
    cout<<"3";
}
else if(f[3] == max){
    cout<<"4";
}
else{
    cout<<"5";
}
   
}
