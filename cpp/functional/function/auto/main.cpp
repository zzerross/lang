#include <functional>
#include <iostream>

using namespace std;

// auto need -fconcepts
void print(auto get_name) {
    cout << "Hello, " << get_name() << endl;
}

const char* get_name() {
    return "World";
}

auto main() -> int {
    print(get_name);

    return 0;
}
