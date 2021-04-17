#include <functional>
#include <iostream>
#include <map>

using namespace std;

auto add(auto a, auto b) {
    return a + b;
}

auto main() -> int {
    map<string, function<double(double, double)>> functions;

#if 0 // error: no match for ‘operator=’ (
      //     operand types are 
      //         ‘std::map<std::__cxx11::basic_string<char>, 
      //                   std::function<double(double, double)> >::mapped_type’ {
      //              aka ‘std::function<double(double, double)>’} 
      //     and ‘<unresolved overloaded function type>’)
    functions["+"] = add;
#endif

    cout << functions["+"](1.0, 2.0) << endl;

    return 0;
}

