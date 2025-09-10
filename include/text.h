#ifndef TENGINE_TEXT_H_
#define TENGINE_TEXT_H_
#include <ostream>

class Text
{
private:
    const char *text;
public:
    explicit Text(const char *new_text = "");
    void reset(const char *new_text = "");
    const char *to_string() const;
    friend std::ostream &operator<<(std::ostream &os, const Text &text);
};

#endif