#include<bits/stdc++.h>
using namespace std;  

int main(){
    int N; cin>>N;
    while(N--){
       int n, m, s;
        cin>>n>>m>>s;
        ((s+m-1)%n == 0)?cout<< n<<endl : cout<< ((s+m-1)%n)<<endl;
    } 
}
 