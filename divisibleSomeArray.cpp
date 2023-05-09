
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int count = 0;
    for(int i = 0; i <n; i++){
        for(int j = 1; j <n; j++){
            int sum = (a[i] + a[j]);

            if((i < j) && (sum % k) == 0 ){
                count++;
                
                
            }
        }
    }

    cout<<count;
}
