#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    string intersection = "";
    string unionString = "";
    int i = 0, j = 0;

    while (i < str1.length() && j < str2.length()) {
        if (str1[i] == str2[j]) {
            intersection += str1[i];

            if (i == 0 || str1[i] != str1[i - 1]) {
                unionString += str1[i];
            }

            ++i;
            ++j;
        } else if (str1[i] < str2[j]) {
            if (i == 0 || str1[i] != str1[i - 1]) {
                unionString += str1[i];
            }
            ++i;
        } else {
            if (j == 0 || str2[j] != str2[j - 1]) {
                unionString += str2[j];
            }
            ++j;
        }
    }

    while (i < str1.length()) {
        if (i == 0 || str1[i] != str1[i - 1]) {
            unionString += str1[i];
        }
        ++i;
    }

    while (j < str2.length()) {
        if (j == 0 || str2[j] != str2[j - 1]) {
            unionString += str2[j];
        }
        ++j;
    }

    cout << intersection << endl;
    cout << unionString;

    return 0;
}

