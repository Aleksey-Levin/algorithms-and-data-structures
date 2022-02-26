#include <iostream>
#include <fstream>
using namespace std;
int main(){



    int w,h;
    cin >> h >> w;
    int a[h][w];
    int b[h][w]={0};

    for (int i = 0; i<h; i++){
        for (int x = 0; x<w; x++){
            cin >> a[i][x];
        }
    }
    b[h-1][0]=a[h-1][0];
    for (int i = h-2; i>=0; i--){
         b[i][0]=b[i+1][0]+a[i][0];
    }
    for (int i = 1; i<w; i++){
         b[h-1][i]=b[h-1][i-1]+a[h-1][i];
    }
    for (int i = h-2; i>=0; i--){
        for (int x = 1; x<w; x++){
            b[i][x]=a[i][x] + max(b[i+1][x],b[i][x-1]);
        }
    }
    cout << b[0][w-1];
return 0;
}
