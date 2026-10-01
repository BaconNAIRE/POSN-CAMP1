#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    if (str.find('*') != -1) {
        int pos = str.rfind('*');
        double a = stod(str.substr(0,pos));
        double b = stod(str.substr(pos+1,str.size()));
        cout << fixed << setprecision(2) << a*b << '\n';
        return 0;
    } else if (str.find('-') != -1) {
        int pos = str.rfind('-');
        double a = stod(str.substr(0,pos));
        double b = stod(str.substr(pos+1,str.size()));
        cout << fixed << setprecision(2) << a-b << '\n';
        return 0;
    }else if (str.find('+') != -1) {
        int pos = str.rfind('+');
        double a = stod(str.substr(0,pos));
        double b = stod(str.substr(pos+1,str.size()));
        cout << fixed << setprecision(2) << a+b << '\n';
        return 0;
    }else if (str.find('/') != -1) {
        int pos = str.rfind('/');
        double a = stod(str.substr(0,pos));
        double b = stod(str.substr(pos+1,str.size()));
        cout << fixed << setprecision(2) << a/b << '\n';
        return 0;
    }
    return 0;
}