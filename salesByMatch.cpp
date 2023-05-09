
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, c = 0;
  cin>>n;
  int a[n];
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }
  int f[n];
  for(int i = 0; i<n; i++){
    f[i] = 0;
    }
    sort(a, a+n);

int f_c = 0, f_count = 0;
 for(int i = 0; i< n; i++){
    for(int j = 0; j<n; j++){
        if(a[f_count] == a[j]){
            f_c++;
        }
    }

    f[i] = f_c;
    f_count = f_c + f_count;
    f_c = 0;
 }
 int sum = 0; 

 for(int i = 0; i<n; i++){ 

    if(f[i] % 2 == 0){
        sum = sum+f[i];
    }
    
    else{
        sum = sum+(f[i] - 1);
    }
    }

int ans = sum/2;
cout<<ans; 
}