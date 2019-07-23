#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=N-1; i>=0; i--){ scanf("%d", &arr[i]); }
    for(int i=0; i<N; i++){
        cout << arr[i];
        if(i<N-1) cout << " ";
    }
    return 0;
}