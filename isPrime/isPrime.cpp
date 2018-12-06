#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    bool primes[a+1];
    memset(primes,true,sizeof(primes));
    
    primes[0] = false;
    primes[1] = false;
    for (int i=2;i<=a;i++){
        if (primes[i] == true){
            for (int j=2;j*i<=a;j++){
                primes[j*i] = false;
            }
        }
    }
    if (primes[a] == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
