#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    using Score = pair<int, string>;

    set<Score> scores;

    scores.insert(Score(20, "Canny"));
    scores.insert(Score(20, "Brown"));
    scores.insert(Score(10, "Army"));
    scores.insert(Score(30, "Arrow"));

    for (const auto& score : scores)
        cout << score.first << " " << score.second << endl;

    return 0;
}
