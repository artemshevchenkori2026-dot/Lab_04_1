#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    // 1) Спосіб через цикл while
    S = 0;
    i = 1;
    while (i <= N)
    {
        S += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
        i++;
    }
    cout << "1) while: S = " << S << endl;

    // 2) Спосіб через цикл do-while
    S = 0;
    i = 1;
    do
    {
        S += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
        i++;
    } while (i <= N);
    cout << "2) do-while: S = " << S << endl;

    // 3) Спосіб через цикл for (інкремент)
    S = 0;
    for (i = 1; i <= N; i++)
    {
        S += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
    }
    cout << "3) for (i++): S = " << S << endl;

    // 4) Спосіб через цикл for (декремент)
    S = 0;
    for (i = N; i >= 1; i--)
    {
        S += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
    }
    cout << "4) for (i--): S = " << S << endl;

    return 0;
}
