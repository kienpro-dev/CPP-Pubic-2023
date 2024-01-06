#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <string>

using namespace std;

string intToString(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

string parse(string x, int index) {
	if(index==1){
		return x+"@gmail.com";
	}
    return x + intToString(index) + "@gmail.com";
}

int main() {
    int size;
    cin >> size;
    cin.ignore(1);
    map<string, int> mp;

    for (int i = 0; i < size; i++) {
        string x;
        getline(cin, x);
        for (int i = 0; i < x.size(); i++) {
            x[i] = tolower(x[i]);
        }
        stringstream ss(x);
        string tmp;
        vector<string> v;
        while (ss >> tmp) {
            v.push_back(tmp);
        }
        string result = v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++) {
            result += v[i][0];
        }
        mp[result]++;
        cout << parse(result, mp[result]) << endl;
    }
}

