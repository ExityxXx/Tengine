#include <iostream>
#include <root.h>
#include <widget.h>
#include <text.h>

int main(void)
{
    using namespace std;
    Root app("Test");
    Widget main;
    Text text("Hello, World!");

    main.add(text);
    main.add(Text("Hi"));
    app.add_widget(main);
    app.draw();
    return 0;
}