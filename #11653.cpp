/*
BaekJoon No
#11653
*/

#include <iostream>

using namespace std;

void setDefault(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
}

int main(){
    setDefault();

    int n;
    cin >> n;

    while(n!=1){
        for(int i=2; i<=n; ++i){
            if(n%i==0){
                cout << i << '\n';
                n /= i;
                break;
            }
        }
    }

    return 0;
}