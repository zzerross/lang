#include <iostream>

using namespace std;

class Class {
public:
    Class(int id): id(id) {
        cout << __PRETTY_FUNCTION__ << ": id=" << id << endl;
    }

    Class(const Class& other) {
        id = other.id;

        cout << __PRETTY_FUNCTION__ << ": id=" << id << endl;
    }

    int id;
};

int main() {
    Class a(0);
    Class b(a);

    return 0;
}
