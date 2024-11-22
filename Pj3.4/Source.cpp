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

    // �������� �������� ������ R
    cout << "������ �������� R: ";
    cin >> R;

    
    cout << "������ ���������� ����� (x, y): ";
    cin >> x >> y;

   
    if (isInside(x, y, R)) {
        cout << "����� (" << x << ", " << y << ") ����������� � ����������� ������." << endl;
    }
    else {
        cout << "����� (" << x << ", " << y << ") �� ����������� � ����������� ������." << endl;
    }

    return 0;
}
