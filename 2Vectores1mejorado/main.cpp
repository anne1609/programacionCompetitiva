#include <iostream>

using namespace std;

int main()
{
    int a,b,n,suma;
    suma=0;
    cin>>a>>b;
    cin>>n;
    int nros;
    for(int i=0;i<n;i++){
        cin>>nros;
         if(nros>=a && nros<=b){
            suma=nros+suma;
        }
    }


    cout<<suma;
    return 0;
}

