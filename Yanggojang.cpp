#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2) {
    return p1.second > p2.second;
}

int main() {
    vector<pair<string, int>> school;
    int testcase, sc_num;
    string s;
    int n;
    vector<string> result;


    cin >> testcase;
    for(int i=0; i<testcase; i++) {
        cin >> sc_num;
        for(int j=0; j<sc_num; j++) {
            cin >> s >> n;
            school.push_back(make_pair(s, n));
        }
        sort(school.begin(), school.end(), cmp);
        result.push_back(school.at(0).first);
    }

    for(auto& r : result) {
        cout << r << "\n";
    }
}
