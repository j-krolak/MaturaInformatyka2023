#include <bits/stdc++.h>

using namespace std;


int main(){

    long long ans2 = 0;
    string sans2;

    for(int i = 0; i < 100; i++){
        string bin;
        cin >> bin;

        long long num = 0;
        long long pow = 1;
        for(int i = bin.size() - 1; i >= 0; i--){
            if(bin[i] == '1')
                num += pow;
            pow *= 2;
        }
        ans2=  num ^ (num/2) ;
        while(ans2 > 0){
            cout << ans2%2;
            ans2 /=2;
        }
        cout << '\n';
    }
    
    return 0;
}

