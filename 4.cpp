#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream cin("smallsort.in");
    ofstream cout("smallsort.out");
    cin >> n;
    int a[n];
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    for (int i = 0; i<n;i++){
        int b = i;
        while(b!=0 and a[b]<a[b-1]){
            swap(a[b],a[b-1]);
            b--;
        }
    }
    for (int i = 0; i<n;i++){
        cout << a[i] << ' ';
    }
return 0;
}
