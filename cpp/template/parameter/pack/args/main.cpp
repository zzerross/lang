#include <functional>
#include <iostream>

template<typename F, typename... A>
auto call(F func, A... args) {
    return func(args...);
}

auto main() -> int {
    call(printf, "%s %d %s %s\n", "I'm", 13, "years", "old");

    return 0;
}
