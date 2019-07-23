#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> res;
    int tmp;
    char ch;
    
    while(ss >> tmp){
        res.push_back(tmp);
        ss >> ch;
    }

    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(auto& i: integers) {
        cout << i << "\n";
    }
    
    return 0;
}