// Root class implementation
// root.cpp

#include <iostream>
#include "../include/root.h"

bool Root::widget_is_exists(const Widget &widget)
{
    for (int i = 0; i < widgets.size(); ++i)
        if (widgets[i] == widget) return true;
    return false;
}

Root::Root(const char *new_title) { title = new_title; }
void Root::reset(const char *new_title) { title = new_title; }
void Root::add_widget(const Widget &widget) { widgets.push_back(widget); }
const char *Root::get_title() const { return title; }
std::ostream &operator<<(std::ostream &os, const Root &root) { os << root.title; return os; }
