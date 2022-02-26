#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream cin("sortland.in");
    ofstream cout("sortland.out");
    int n;
    cin >> n;
    float a[n],c[n],amin,amax,amidle;
    for(int i = 0; i<n;i++){
        cin >> a[i];
        c[i]=a[i];
    }
    for (int i = 0; i<n;i++){
        int b = i;
        while(b!=0 and a[b]<a[b-1]){
            swap(a[b],a[b-1]);
            b--;
        }
    }
    for (int i = 0; i<n; i++){
        if(a[0]==c[i]){
            amin=i;
        }
        if(a[n/2]==c[i]){
            amidle=i;
        }
        if(a[n-1]==c[i]){
            amax=i;
        }
    }
    cout << amin+1 << ' ' << amidle+1 << ' ' << amax+1;
return 0;
}
