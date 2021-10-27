#include <algorithm>

using namespace std;

int main() {
    char names[][8] = {
        "James",
        "Buddy",
        "Juliet",
        "Carma",
    };

    sort(names, names + sizeof(names) / sizeof(names[0]));

    return 0;
}
