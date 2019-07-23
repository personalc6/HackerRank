#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string msg;
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(sizeof(s)/sizeof(string) < n) msg = "Greater than 9";
    else msg = s[n-1];

    cout << msg << endl;

    return 0;
}