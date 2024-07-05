#include<bits/stdc++.h>
using namespace std;

int pairscount(int arr[], int n, int K) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int comp = K - arr[i];
        if (freq.find(comp) != freq.end()) {
            count += freq[comp];
        }
        freq[arr[i]]++;
    }
    return count;
}
