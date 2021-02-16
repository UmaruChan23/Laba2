#include <iostream>

using namespace std;

bool isInArea(double x, double y);

double f(double x);

int main() {
    double x, y;
    int funcNum;
    cout << "choose function:" << endl;
    cin >> funcNum;

    switch (funcNum) {
        case 1: {
            cout << "input x:" << endl;
            cin >> x;
            cout << "input y:" << endl;
            cin >> y;
            bool rez = isInArea(x, y);
            cout << rez << endl;
            break;
        }
        case 2: {
            cout << "input x:" << endl;
            cin >> x;
            cout << f(x) << endl;
            break;
        }
        default: {
            cout << "not found" << endl;
            break;
        }

    }
    system("PAUSE");
    return 0;
}
