/*Cricket Target Calculator Create abaseclassMatchFormatwithafunctioncalculateTarget(int firstInningsScore). 
Derive classes T20Match and ODIMatch. Override the function to calculate a target score by adding a required run margin of 1% of the first-innings score for T20 matches and 2% for ODI matches. 
Round the margin up to the next integer when necessary. Display the target score for each format.*/

#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) = 0;
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        int target = firstInningsScore + margin;

        cout << "T20 Target Score: " << target << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        int target = firstInningsScore + margin;

        cout << "ODI Target Score: " << target << endl;
    }
};

int main() {
    int score;

    cout << "Enter first innings score: ";
    cin >> score;

    if (score < 0) {
        cout << "Invalid score!" << endl;
        return 0;
    }

    T20Match t;
    ODIMatch o;

    t.calculateTarget(score);
    o.calculateTarget(score);

    return 0;
}