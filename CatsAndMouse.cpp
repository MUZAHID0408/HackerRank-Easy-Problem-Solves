#include<bits/stdc++.h>
using namespace std;

int main(){
     int q;
     cin>>q;
     for(int i =0; i< q; i++){
        int x, y, z;
        cin>>x>>y>>z;
        int m_aDiff = z-x;
        if(m_aDiff <= 0){
            m_aDiff = -1*m_aDiff;
        }
        int m_bDiff = z-y;
        if(m_bDiff <= 0){
            m_bDiff = -1*m_bDiff;
        }
        if(m_aDiff>m_bDiff){
            cout<<"Cat B";
        }
        else if(m_bDiff>m_aDiff){
            cout<<"Cat A";
        }
        else if(m_bDiff == m_aDiff){
            cout<<"Mouse C";
        }
        cout<<endl;
     }

}







