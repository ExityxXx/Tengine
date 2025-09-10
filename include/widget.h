#ifndef TENGINE_WIDGET_H_
#define TENGINE_WIDGET_H_
#include <ostream>
#include <vector>
#include <text.h>
class Widget
{
private:
    int x; // Горизонтальная ось
    int y; // Вертикальная ось
    int height; // Высота
    int width; // Ширина
    std::vector<Text> text_arr;
public:
    Widget(
        int new_x = 0,
        int new_y = 0,
        int new_height = 0,
        int new_width = 0
    );
    void reset(
        int new_x = 0,
        int new_y = 0,
        int new_height = 0,
        int new_width = 0
    );
    int get_height() const;
    int get_width() const; 
    void add(const Text &text);
    std::vector<Text> get_text_arr() const;
    bool operator==(const Widget &widget) const;
    friend std::ostream &operator<<(std::ostream &os, const Widget &widget);
};
#endif