#include <bits/stdc++.h>
using namespace std;

bool is_even(int a){
        if(a%2 == 0)
            return true; 
        else
            return false;
    }


int main()
{
    int t;
    cin>>t;
    int n[t];
    for(int i = 0; i<t; i++)
    {   
         cin>>n[i];
    }

    for(int i = 0; i< t; i++)
    {
         int ans = 1;
        for(int j = 1; j<= n[i]; j++)
        {
            if(is_even(j))
            {
                 ans = ans+1;
            }
            else{
                    ans = ans*2;
                 }

         }
         cout<<ans<<endl;


     }


    

    

    

 

}
