#include<bits/stdc++.h>
 using namespace std;

void display(int *a, int n){
    for(int i = 0; i< n;i++){
        cout<<a[i]<<" ";
    }
}

 int main(){
    int n, sum = 0 ; 
    cin>>n;
    int a[n], b[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i = 0; i< n;i++){
        sum = 0;
        for(int j = 0; j< n; j++){
            if(a[i] == a[j] or (a[i] + 1) == a[j]){
                sum++;
            }
        }
        b[i] = sum;

    }
    
    sort(b, b+n);
    cout<<b[n-1];

  }