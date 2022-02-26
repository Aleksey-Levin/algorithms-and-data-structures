#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream cin("turtle.in ");
    ofstream cout("turtle.out");

    int a;
    long long int b;
    cin >> a >> b;
    cout << a + b*b;
return 0;
}
