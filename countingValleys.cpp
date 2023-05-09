#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    char a[n];
    for(int i = 0; i< n; i++){
        cin>>a[i];

    }

    int altd = 0 , count = 0;

    for(int i = 0; i< n; i++){
       
            if(a[i] == 'U'){
                if(altd == -1)
                    count++;

                altd++;
            }
            else{
                altd--;
            }
        
    }
    cout<<count;
    
}







