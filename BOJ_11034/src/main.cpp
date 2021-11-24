#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    while (cin) {
        auto ab = b - a;
        auto bc = c - b;

        auto jump = max(ab - 1, bc - 1);
        cout << jump << '\n';

        // next
        cin >> a >> b >> c;
    }

    return 0;
}