#include <iostream>

using namespace std;

int main() {
    auto s = []() { return "[] is lambda indicator"; };

    cout << typeid(s).name() << endl;
    cout << s << endl;

    return 0;
}
