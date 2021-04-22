// reference: https://m.blog.naver.com/serenad/221494258714

#include <iostream>

using namespace std;

auto multiply2(int a) {
    return [a](int b) {
        return a * b;
    };
}

auto multiply3(int a) {
    return [a](int b) {
        return multiply2(a * b);
    };
}

auto main() -> int {
    cout << multiply3(2)(3)(4) << endl;

    return 0;
}
