#include <array>
#include <algorithm>
#include <iostream>

struct Obj {
    int id;
    char name[10];
} a[5] = {
    { 10, "object-a" },
    { 11, "object-b" },
    { 12, "object-c" },
    { 13, "object-d" },
    { 14, "object-e" },
};

void print(Obj& o) {
    std::cout << "{ id=" << o.id << " name=" << o.name << "}" << std::endl;
}

auto main() -> int {
    std::for_each(std::begin(a), std::end(a), print);

    return 0;
}
