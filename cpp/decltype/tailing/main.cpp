#include <iostream>

template <typename I, typename J>
auto add(I i, J j) -> decltype(i + j) {
    return i + j;
}

auto main() -> int {
    auto d = add<int, double>(2, 2.5);

    std::cout << "type=" << typeid(d).name() << " value=" << d << std::endl;

    return 0;
}
