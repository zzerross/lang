#include <functional>
#include <iostream>

using namespace std;

void print(function<const char*()> get_name) {
    cout << "Hello, " << get_name() << endl;
}

const char* get_name() {
    return "World";
}

auto main() -> int {
    print(get_name);

    return 0;
}
