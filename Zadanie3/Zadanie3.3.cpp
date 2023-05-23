#include <bits/stdc++.h>

using namespace std;
int seq[6];

bool check();

int main(){
    int ans = 0;
    for(int i = 0; i < 10000; i++){
        int tmp;
        cin >> tmp;
        if(i > 5){
            seq[0] = seq[1];
            seq[1] = seq[2];
            seq[2] = seq[3];
            seq[3] = seq[4];
            seq[4] = seq[5];
            seq[5] = tmp;
        }
        else{
            seq[i] = tmp;
        }
        if(i > 4 && check())
            ans++;

    }
    cout << "Zadanie 3.3 " << ans<< '\n';
}

bool check(){

    if(seq[0] >= seq[1])
        return false;
    
    if(seq[4] <= seq[5])
        return false;
    bool tmp = false;
    bool tmp1 = false;
    for(int i = 1; i < 5; i++){
        if(!tmp && seq[i] < seq[i-1]){
            tmp = true;
            continue;
        }
        if(!tmp && seq[i] == seq[i-1]){
            tmp1 = true;
            tmp = true;
            continue;
        }   

        if(tmp && seq[i] >= seq[i-1]){
            return false;
        }

        if(tmp1 && seq[i] == seq[i-1])
            return false;
    }

    return true;
}
