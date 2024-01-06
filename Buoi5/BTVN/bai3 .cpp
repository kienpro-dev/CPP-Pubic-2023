#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  

    while (t--) {
        string str;
        getline(cin, str);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
		string result="";
        stringstream ss(str);
        string tmp;
        while(ss>>tmp){
        	tmp[0] = toupper(tmp[0]);
            result += tmp + " ";
		}
		cout<<result<<endl;
    }

    return 0;
}

