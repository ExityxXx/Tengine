// Root class prototypes
// root.h

#ifndef TENGINE_ROOT_H_
#define TENGINE_ROOT_H_
#include <ostream>
#include <vector>
#include "widget.h"

class Root
{
private:
    const char *title;
    std::vector<Widget> widgets;
    
public:
    Root(const char *new_title = "Default Root");
    void reset(const char *new_title = "Default Root");
    const char *get_title() const;
    bool widget_is_exists(const Widget &widget);
    void add_widget(const Widget &widget);
    friend std::ostream &operator<<(std::ostream &os, const Root &root);
};

#endif
