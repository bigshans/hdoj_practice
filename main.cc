#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int J, F;
    double per;
};

bool cmp(Node a, Node b)
{
    return a.per < b.per;
}

const int N = 1005;

Node nodes[N];

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n && ~n) {
        for (int i = 0; i < n; ++i) {
            cin >> nodes[i].J >> nodes[i].F;
            nodes[i].per = (double)(nodes[i].F) / nodes[i].J;
        }
        sort(nodes, nodes + n, cmp);
    }
    return 0;
}

