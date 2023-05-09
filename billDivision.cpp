#include <bits/stdc++.h>
using namespace std;

int main()
{
  string p = "Bon Appetit";
  int n, d;
  cin>>n>>d;
  int a[n];
  for(int i = 0; i< n; i++){
    cin>>a[i];
  }
  int c, sum = 0;
  cin>>c;
  int i;
  for(i = 0; i< n; i++){
    if(i!=d){
        sum = sum+a[i];
    }
  }
  int val = (sum)/2;
  if(val == c){
    cout<<p;
  }
  else{
    cout<<(c-val);
  }

}
