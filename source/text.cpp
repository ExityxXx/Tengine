#include <text.h>

Text::Text(const char *new_text)
{
    text = new_text;
}

void Text::reset(const char *new_text)
{
    text = new_text;
}

const char *Text::to_string() const
{
    return text;
}

std::ostream &operator<<(std::ostream &os, const Text &text)
{
    os << "Text(" << text.text << ")";
    return os;
}
