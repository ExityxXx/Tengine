#include <widget.h>

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

void Widget::reset(
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

int Widget::get_height() const
{
    return height;
}

int Widget::get_width() const
{
    return width;
}

bool Widget::operator==(const Widget &widget) const
{
    return (
        (x == widget.x) &&
        (y == widget.y) &&
        (width == widget.width) &&
        (height == widget.height)
            );
}

void Widget::add(const Text &text)
{
    text_arr.push_back(text);
}

std::vector<Text> Widget::get_text_arr() const
{
    return text_arr;
}

std::ostream &operator<<(std::ostream &os, const Widget &widget)
{
    os << "Widget(" << widget.x << ", "
                    << widget.y << ", "
                    << widget.height << ", "
                    << widget.width << ")";
    return os;
}
