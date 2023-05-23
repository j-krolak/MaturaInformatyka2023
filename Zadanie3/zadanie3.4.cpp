#include <bits/stdc++.h>

using namespace std;
constexpr int MAXN = 1e5 + 10;
int seq[MAXN];



int main(){

    for(int i = 0; i < 100000; i++){
        int tmp;
        cin >> seq[i];
        
    }
    bool b1 = false;
    bool b2 = false;
    string tmp;
    string ans;
    int ans2;
    for(int i = 1; i < 100000; i++){
        if(b2 && b1 && seq[i] >= seq[i-1]){
            b1 = false;
            b2 = false;
            if(ans.size() < tmp.size()){
                ans = tmp;
                ans2 = i + 1 - ans.size();
            }

            tmp = "";

        }

        if(seq[i] > seq[i-1] && !b1){
            tmp += to_string(seq[i-1]);
            b1 = true;
        }
        if(b1)
            tmp += to_string(seq[i]);
        if(b1 && b2 && seq[i] == seq[i-1]){
            b1 = false;
            b2 = false;
            tmp = "";
        }
        if(b1 && !b2 && seq[i] <= seq[i-1]){
            b2 = true;
        }
    }
    cout << "Zadanie 3.4 " <<  "\n" << ans2 << '\n' << ans << '\n';
}
