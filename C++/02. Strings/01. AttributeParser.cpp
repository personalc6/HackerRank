#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <regex>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, r;
    cin >> t >> r;

    string tag[t];
    getline(cin, tag[0]);
    for(int i=0; i<t; i++){ getline(cin, tag[i]); }

    string read[r];
    for(int i=0; i<r; i++){ getline(cin, read[i]); }

    string *chain = new string[100];
    map<string, string> match;

    for(auto& s: tag){
        regex open_reg("<(\\w+)( [\\s\\S]+|\\b)>");
        regex close_reg("</(\\w+)>");
        regex attr_reg("(\\w+) = \"([^\"]+)\"");
        smatch m, m2;

        if(regex_match(s, m, open_reg)){
            if(!chain->empty()) chain->append(".");
            chain->append(m[1]);
            while(regex_search(s, m2, attr_reg)){
                match.insert(make_pair(*chain+"~"+(string) m2[1], m2[2]));
                s = m2.suffix().str();
            }
        }else if(regex_match(s, m, close_reg)){
            int idx = chain->find(m[1])-1;
            if(idx < 0) idx = 0;
            *chain = chain->substr(0, idx);
        }
    }

    // for(auto m=match.begin(); m!=match.end(); m++){ cout << m->first << " || " << m->second << endl; }
    for(auto& s: read){
        if(match.find(s) == match.end()) cout << "Not Found!" << endl;
        else cout << match.find(s)->second << endl;
    }

    return 0;
}