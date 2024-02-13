#include <bits/stdc++.h>
using namespace std;

bool solve() {
    vector<int> nums; 
    for (int i = 0; i < 10; i++) {
        nums.push_back(i);
    }
    for (auto i : nums) {
        cout << i << "\n";
    }
    return false;
}

int main() {
    while (solve());
    return 0;
}