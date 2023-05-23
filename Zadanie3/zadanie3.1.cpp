#include <bits/stdc++.h>

using namespace std;

int main(){
    int last = 0;
    int ans = 0;
    int tmp;
    for(int i = 0; i < 10000; i++){
        cin >> tmp;
        if(last*10 + tmp > 90)
            ans++;
        last = tmp;
    }

    cout << "Zadanie 3.1 " << ans << '\n';
    return 0;
}