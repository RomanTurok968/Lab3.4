#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;


bool isInside(double x, double y, double R) {
    
    if (x >= 0 && y <= 0 && (x * x + y * y <= R * R)) {
        return true;
    }
    return false;
}

int main() {
    SetConsoleOutputCP(1251);
    double x, y, R;

    // Введення значення радіуса R
    cout << "Введіть значення R: ";
    cin >> R;

    
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

   
    if (isInside(x, y, R)) {
        cout << "Точка (" << x << ", " << y << ") знаходиться в зафарбованій області." << endl;
    }
    else {
        cout << "Точка (" << x << ", " << y << ") НЕ знаходиться в зафарбованій області." << endl;
    }

    return 0;
}
