#ifndef TENGINE_WIDGET_H_
#define TENGINE_WIDGET_H_
#include <ostream>
class Widget
{
private:
    int x; // Горизонтальная ось
    int y; // Вертикальная ось
    int height; // Высота
    int width; // Ширина
public:
    Widget(
        int new_x = 0,
        int new_y = 0,
        int new_height = 0,
        int new_width = 0
        );
    bool operator==(const Widget &widget);
    friend std::ostream &operator<<(std::ostream &os, const Widget &widget);
};
#endif