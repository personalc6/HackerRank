#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int start, end;
    cin >> start >> end;

    for(int i=start; i<=end; i++){
        if(sizeof(s)/sizeof(string) < i){
            if(i%2==0) cout << "even" << endl;
            else cout << "odd" << endl;
        }else{
            cout << s[i-1] << endl;
        }
    }
    
    return 0;
}