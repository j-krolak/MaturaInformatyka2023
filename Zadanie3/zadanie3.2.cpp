#include <bits/stdc++.h>

using namespace std;

constexpr int MAXN = 1e2 +10;

int occur[MAXN];

int main(){
    int last = 0;
    int ans = 0;
    int tmp;

    pair<int, string> maxi {0,"00"};
    pair<int, string> mini{1e6,"99"};

    for(int i = 0; i < 100000; i++){
        cin >> tmp;
        int num = last * 10 + tmp;
        occur[num]++;
        last = tmp;
    }

    for(int i = 0; i < 100; i++){
        if(occur[i] > maxi.first){
            maxi.first = occur[i];
            if(i < 10){
                maxi.second = "0" + to_string(i);
            }
            else{
               maxi.second = to_string(i); 
            }
        }
        if(occur[i]  < mini.first){
            mini.first = occur[i];
            if(i < 10){
                mini.second = "0" + to_string(i);
            }
            else{
               mini.second = to_string(i); 
            }
        }
    }

    cout << "Zadanie 3.2 \n" << mini.second << " " << mini.first << '\n' << maxi.second << " " << maxi.first << '\n';

    return 0;
}