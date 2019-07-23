#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;

    int **arr = new int*[n]();
    for(int i=0; i<n; i++){
        int k;
        cin >> k;

        int *k_arr = new int[k]();
        for(int j=0; j<k; j++){ cin >> k_arr[j]; }

        arr[i] = k_arr;
    }

    for(int k=0; k<q; k++){
        int i, j;
        cin >> i >> j;

        cout << arr[i][j] << endl;
    }
    return 0;
}