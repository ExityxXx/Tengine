#include "../include/widget.h"

Widget::Widget(
    int new_x,
    int new_y,
    int new_height,
    int new_width
)
{
    x = new_x;
    y = new_y;
    height = new_height;
    width = new_width;
}

bool Widget::operator==(const Widget &widget)
{
    return (
            (this->x == widget.x) &&
            (this->y == widget.y) &&
            (this->width == widget.width) &&
            (this->height == widget.height)
            );
}

std::ostream &operator<<(std::ostream &os, const Widget &widget)
{
    os << "x = " << widget.x << std::endl;
    os << "y = " << widget.y << std::endl;
    os << "height = " << widget.height << std::endl;
    os << "width = " << widget.width << std::endl;
    return os;
}