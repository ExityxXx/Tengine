// Root class prototypes
// root.h

#ifndef TENGINE_ROOT_H_
#define TENGINE_ROOT_H_
#include <ostream>
#include <vector>
#include <widget.h>

class Root
{
private:
    const char *title;
    std::vector<Widget> widgets;
public:
    explicit Root(const char *new_title = "Default Root");
    void reset(const char *new_title = "Default Root");
    const char *to_string() const;
    bool widget_is_exists(const Widget &widget) const;
    void add_widget(const Widget &widget);
    void draw() const;
    friend std::ostream &operator<<(std::ostream &os, const Root &root);
};

#endif
