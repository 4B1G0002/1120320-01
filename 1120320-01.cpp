// 1120320-01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// ITSA NO-08

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;

    cin >> number;
    string str = to_string(number);
    string newstring;

    for (int i = str.length() - 1; i >= 0; i--) {
        newstring.push_back(str[i]);
    }
    if (newstring == str) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}