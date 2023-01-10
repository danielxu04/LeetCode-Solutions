// O(n^2) complexity
// go through array one by one, store each indexed value into another array
// compare current index to all other elements in original array - if duplicate, store into third array
// return the third array - stores the duplicate values


// O(n) complexity 

// store all elements in a hashmap, where elements in vct are the keys, and the mapped value is incremented based on the number of times a key 
// value is passed through 

// this essentially acts as a tracker of how many of each number there are
// if mapped value is greater than 1 (thus a duplicate), return it as a duplicate


// O(n) complexity

#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vct = {1, 2, 7, 4, 1, 3, 6, 7};

    unordered_map<int, int> mp;

    vector<int> duplicates;

    for(int i = 0; i < vct.size(); i++){
        mp[vct[i]]++;
    }


    for(auto x: mp){
        if (x.second > 1){
            duplicates.push_back(x.first);
        }
    }

    for(int j = 0; j < duplicates.size(); j++){
        cout << duplicates[j] << endl;
    }

}



/*  O(n) using arrays - potentially :)

int main(){

    vector<int> vct = {1, 2, 7, 4, 1, 3, 6, 7};

    vector<int> checker;
    vector<int> duplicates;

    const int n = vct.size();

    for(int i = 0; i < n; i++){
        // if(vct[i] exists in checker)

        // add vct[i] to duplicates
    }

    // output all duplicated elements
    for(int j = 0;  j< duplicates.size(); j++){
        cout << duplicates[j];
    }





    return 0;
}

*/

