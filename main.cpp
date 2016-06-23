#include <iostream>
using namespace std;
 
int main() {
    long simpan[10000] = {0};
    for (long i=2;i<10000;i++) {
        for (long j=i*i;j<10000;j+=i) {
            simpan[j - 1]=1;
        }
    }
    for (long i=1;i<10000;i++) {
        if (simpan[i-1]==0)
            cout<<i<<" ";
    }
 
}
