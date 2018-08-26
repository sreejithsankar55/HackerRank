#include <sstream>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	vector < int > v;
    char ch=' ';
    stringstream ss(str);
    int a;
    
    while(ss >> a)
    {
         v.push_back(a);
         ss>>ch;
    }   
        
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}