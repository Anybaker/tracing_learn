#include <iostream>
#include <string>
#include <vector>
using namespace std;

void popandout(vector<char> num) {
    while (!num.empty() && num.back() == '0') num.pop_back();
    if (num.empty()) {
        cout << "0";
        return;
    }
    for (int i = num.size() - 1; i >= 0; i--) cout << num[i];
}

void popandoutForDot2(vector<char> num) {
    if (num.empty()) {
        cout << "0";
        return;
    }
    int j = 0;
    while (j < num.size() && num[j] == '0') j++;
    if (j == num.size()) {
        cout << "0";
        return;
    }
    for (int i = num.size() - 1; i >= j; i--) cout << num[i];
}

int main() {
    string in;
    if (!(cin >> in) || in.empty()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    vector<char> num(in.begin(), in.end());
    char sig = '\0';
    int pos = -1;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '.' || num[i] == '/' || num[i] == '%') {
            sig = num[i];
            pos = i;
            break; // 只处理第一个符号
        }
    }

    if (pos == -1) {
        popandout(num);
    }
    else if (sig == '.') {
        vector<char> first(num.begin(), num.begin() + pos);
        vector<char> second(num.begin() + pos + 1, num.end());
        popandout(first);
        cout << sig;
        popandoutForDot2(second);
    }
    else if (sig == '/') {
        vector<char> first(num.begin(), num.begin() + pos);
        vector<char> second(num.begin() + pos + 1, num.end());
        popandout(first);
        cout << sig;
        popandout(second);
    }
    else {
        vector<char> number(num.begin(), num.end() - 1);
        popandout(number);
        cout << "%";
    }
    cout << endl;
    return 0;
}