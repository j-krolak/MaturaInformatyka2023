#include <bits/stdc++.h>

using namespace std;

int countBlocks(string n);

int main(){
    int ans1 = 0;
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
        if(num > ans2){
            ans2 = num;
            sans2 = bin;
        }

        if(countBlocks(bin) <= 2)
            ans1++;
    }
    cout << ans1 << '\n';
    cout << sans2 << '\n';
    return 0;
}

int countBlocks(string n){
    int ans = 1;
    char last = n[0];
    for(int i = 0; i < n.size(); i++){
        if(n[i] != last)
            ans++;
        last = n[i];
    }

    return ans;
}
