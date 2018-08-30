#ifndef INTERFACE_H
#define INTERFACE_H

class display;
public:
    void refresh();
private:
    vector<window&> windows;

class window;

class input;


#endif // INTERFACE_H
