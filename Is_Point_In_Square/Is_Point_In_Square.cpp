#include <iostream>

using namespace std;

string isInSquare(double x, double y, double begin_x, double begin_y, double end_x, double end_y) {
    if ((x >= begin_x && x <= end_x) && (y >= begin_y && y <= end_y))
    {
        return "в прямоугольнике";
    }
    else
    {
        return "не в прямоугольнике";
    }
}

int main()
{
    /* Пользователь задаёт координаты верхнего левого,
    и нижнего правого угла прямоугольника, а также
    координаты точки (X,Y) в декартовой системе координат.
    Принадлежит ли точка этому прямоугольнику? */

    setlocale(0, "rus");

    double begin_x;
    double begin_y;

    double end_x;
    double end_y;

    double x;
    double y;

    cout << "Введите X, Y верхнего левого угла прямоугольника:\n";
    cout << "X: ";
    cin >> begin_x;
    cout << "Y: ";
    cin >> begin_y;

    cout << "Введите X, Y нижнего правого угла прямоугольника:\n";
    cout << "X: ";
    cin >> end_x;
    cout << "Y: ";
    cin >> end_y;

    cout << "Введите X, Y координаты точки:\n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    cout << "Точка " << "(" << x << ";" << y << ")" 
        << " - " << isInSquare(x, y, begin_x, begin_y, end_x, end_y) << "\n";
}