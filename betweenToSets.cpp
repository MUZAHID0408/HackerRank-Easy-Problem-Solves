// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool fac(int x, int *y, int s){
    int flag = 0;
    for(int i = 1; i<=s; i++){
        if((x % y[i]) != 0){
            flag++;
            return false;
        }
    }

    if(flag == 0)
        return true;
    else
       return false;

}

bool mult(int x, int *y, int s){
    int flag = 0;
    for(int i = 1; i<= s; i++){
        
        if((y[i] % x) != 0){
            flag++;
            return false;
            }

        }

        if(flag == 0){
            return true; 
        }
        else 
            return false;
    }


int main(){
    int s1, s2;
    cin>>s1>>s2;
    int a[s1], b[s2];
    for(int i = 1; i<= s1; i++){
        cin>>a[i];
    }

    for(int i = 1; i<= s2; i++){
        cin>>b[i];
    }
    int num = a[s1];
    int count = 0;
    while(num <= b[s2]){

        if(fac(num, a, s1 ) && mult(num, b, s2)){
            count++;
        }
       
        num++;
    }
    

    cout<<count;
}
