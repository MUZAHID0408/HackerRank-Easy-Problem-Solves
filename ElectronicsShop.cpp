#include<bits/stdc++.h>
using namespace std;

int main(){
     int budget, n1, n2, value = 0;
     cin>>budget>>n1>>n2;

    int key[n1], usb[n2];

    for(int i = 0; i<n1; i++){
        cin>>key[i];
    }

    for(int i = 0; i<n2; i++){
        cin>>usb[i];
    }

    for(int i = 0; i<n1; i++){


        for(int j = 0; j<n2;j++){
            int sum = key[i]+usb[j];
            if(value < sum and sum <= budget){
                value = sum;
            }
        }
    }

    if(value == 0){
        cout<<-1;
    }
    else{
        cout<<value;
    }

}







