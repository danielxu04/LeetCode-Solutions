#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; 
    cin >> n;

    vector<long long> sequence;

    sequence.push_back(n);

    while (n != 1){
        if (n%2 == 1){
            n = n*3 + 1;
        }
        else{
            n /= 2;
        }

        sequence.push_back(n);
    }

    for(int i = 0; i < sequence.size(); i++){
        cout << sequence[i] << " ";
    }

}