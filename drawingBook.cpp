
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
bool is_even(int n){
    if(n%2 == 0){
        return true;
    }
    else
        return false;

}

int main()
{
  int n, c;
  cin>>n>>c;
  if(n==c){
    cout<<"0";
    exit(0);

  }
  else if(c == 1){
    cout<<"0";
    exit(0);
  }
  else if(n-c == 1 && is_even(c)){
    cout<<"0";
    exit(0);
  }
  else if(n-c == 1 && !is_even(c)){
    cout<<"1";
    exit(0);
  }
  int flip = 0;
  int fst = c-1;
  int lst = n-c;
  if(fst == 1){
    cout<<"1";
  }
  else if(fst <lst && is_even(c)){
   
    for(int i = 1; i< N; i = i+2){
        
        if(i == (c-1)){
            break;
        }
         flip++;
       
    }
    cout<<flip+1;
  }
  else if(fst < lst && !is_even(c)){
  
    for(int i = 1; i<N;i = i+2){
        
        if(i == c){
            break;
        }
        flip++;
        
    }
    cout<<flip;
  }
  else if(fst >= lst && is_even(c) && is_even(n)){

        for(int i = n; i>=1; i = i-2){
            
            if(c==i){
                break;
            }
            flip++;
        }
        cout<<flip;
  }
  else if(fst >= lst && !is_even(c) && is_even(n)){

        for(int i = n; i>=1; i = i-2){
            
            if((c+1)==i){
                break;
            }
            flip++;
        }
        cout<<flip;
  }
    else if(fst >= lst && is_even(c) && !is_even(n)){
        for(int i = n; i>=1; i = i-2){
            
            if(i == (c+1)){
                break;
            }
            flip++;
        }
        cout<<flip;
    }
    else if(fst >= lst && !is_even(c) && !is_even(n)){
        for(int i = n; i>=1; i = i-2){
            
            if(i == c){
                break;
            }
            flip++;
        }
        cout<<flip;
    }

}