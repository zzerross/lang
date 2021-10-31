#include <iostream>

using namespace std;

class C {
public:
#define D() dump(__PRETTY_FUNCTION__)
    void dump(const char* caller) {
        cout << "id=" << id << ": " << caller << endl;
    }

    int id;

    C(int id): id(id) { D(); }

    C(C&& other): id(move(other.id)) { D(); }

    ~C() { D(); }

};

int main() {
    C a(1);
    C b = move(a);

    a.id = 2;
    a.dump(__PRETTY_FUNCTION__);

    b.dump(__PRETTY_FUNCTION__);

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
id=1: C::C(int)
id=1: C::C(C&&) // move constructor was called by std::move()

id=2: int main() // instance was kept after std::move()
id=1: int main()

id=1: C::~C()
id=2: C::~C()
#endif
