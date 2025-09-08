#include <iostream>
#include "../include/root.h"
#include "../include/widget.h"

int main(void)
{
    using namespace std;
    Root my_root("My program");
    
    Widget w(5, 4, 150, 200);
    Widget s(20, 31, 400, 100);
    Widget copy = w;

    cout << "Print classes:\n\n";
    cout << my_root << endl;
    cout << w << endl;
    cout << endl;

    my_root.add_widget(w);

    cout << "Test exists widgets:\n\n";
    cout.setf(ios_base::boolalpha);
    cout << "Widget 'w' is exists?: " << my_root.widget_is_exists(w) << endl;
    cout << "Widget 's' is exists?: " << my_root.widget_is_exists(s) << endl;
    cout << "Widget 'w' equal 's'?: " << (w == s) << endl;
    cout << "Widget 'w' equal 'copy'?: " << (w == copy) << endl;
    cout << "Widget 'copy' is exists?: " << my_root.widget_is_exists(copy) << endl;
    return 0;
}