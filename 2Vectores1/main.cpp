#include <iostream>

using namespace std;

int main()
{
    int a,b,n,suma;
    suma=0;
    cin>>a>>b;
    cin>>n;
    int listaNros[n];
    for(int i=0;i<n;i++){
        cin>>listaNros[i];
    }

    for(int j=0;j<n;j++){
        if(listaNros[j]>=a && listaNros[j]<=b){
            suma=listaNros[j]+suma;
        }
    }
    cout<<suma;
    return 0;
}
