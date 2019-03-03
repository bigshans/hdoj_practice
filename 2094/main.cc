#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> winner;
set<string> loser;
string win, lose;

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n && n) {
        for (int i = 0; i < n; ++i) {
            cin >> win >> lose;
            winner.insert(win);
            loser.insert(lose);
        }
        for (auto it = loser.begin(); it != loser.end(); ++it) {
            auto it2 = winner.find(*it);
            if (it2 != winner.end()) {
                winner.erase(it2);
            }
        }
        if (winner.size() == 1) {
            cout  << "Yes\n";
        } else {
            cout << "No\n";
        }
        winner.clear();
        loser.clear();
    }
    return 0;
}
