// Root class implementation
// root.cpp

#include <iostream>
#include <root.h>
#include <vector>
#include <text.h>

Root::Root(const char *new_title)
{ 
    title = new_title;
}

void Root::reset(const char *new_title)
{
    title = new_title;
}

void Root::add_widget(const Widget &widget)
{
    widgets.push_back(widget);
}

bool Root::widget_is_exists(const Widget &widget) const
{
    for (int i = 0; i < widgets.size(); ++i)
        if (widgets[i] == widget) return true;
    return false;
}

const char *Root::to_string() const
{
    return title;
}

std::ostream &operator<<(std::ostream &os, const Root &root)
{
    os << "Root(" << root.title << ")";
    return os;
}

void Root::draw() const
{
    using std::cout;
    using std::endl;
    using std::vector;

    for (int i = 0; i < widgets.size(); ++i)
    {
        vector<Text> text_arr = widgets[i].get_text_arr();
        for (int j = 0; j < text_arr.size(); ++j) cout << text_arr[j].to_string() << endl;
    }

}
