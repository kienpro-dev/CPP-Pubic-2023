#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
    stringstream ss(str);
    string tmp;
    string result = "";
	string arr[100]; 
	int cnt=1;
    while (ss >> tmp) {
        arr[cnt++]=tmp; 
    }
    int count=1;
	while(count<cnt){
		if(cnt-1==count){
			result=arr[count]+result;
		}
		else{
			result+=arr[count][0];
		}
		++count;
	}
    result += "@gmail.com";

    cout << "Email: " << result << endl;

    return 0;
}

