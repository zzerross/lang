#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "A B";
    cout << "original: " << str << endl;

    auto it = remove(begin(str), end(str), ' ');
    const type_info& ti = typeid(it);
    cout << "  remove: " << str << " return " << ti.name() << endl;

    str.erase(it, end(str));
    cout << "   erase: " << str << endl;

    return 0;
}

#if 0
$ g++ main.cpp
$ ./a.out
original: A B
  remove: ABB return N9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
   erase: AB
#endif
