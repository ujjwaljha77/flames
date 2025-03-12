#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getCnt(string x, string y) {
    vector<int> f(26, 0);
    for (char c : x) f[c - 'a']++;
    for (char c : y) f[c - 'a']--;
    int cnt = 0;
    for (int i : f) cnt += abs(i);
    return cnt;
}

string getFlames(int cnt) {
    string f = "FLAMES";
    int idx = 0;
    while (f.length() > 1) {
        idx = (idx + cnt - 1) % f.length();
        f.erase(f.begin() + idx);
    }
    return f[0] == 'F' ? "Friends" : f[0] == 'L' ? "Love" : f[0] == 'A' ? "Affectionate" : f[0] == 'M' ? "Marriage" : f[0] == 'E' ? "Enemies" : "Siblings";
}

int main() {
    string x, y;
    cin >> x >> y;
    cout << getFlames(getCnt(x, y)) << endl;
    return 0;
}
