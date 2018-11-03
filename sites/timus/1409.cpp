#include<iostream>

using namespace std;

int main(){
    long h, l;
    while(cin >> h && cin >> l){
        long hn = 0, ln =0, all = h+l-1;
        ln=all-l;
        hn = all-h;
        cout << hn << " " << ln << endl;
    }
}
