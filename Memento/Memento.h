#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <string>
using namespace std;

class Memento;

class Originator
{
public:
    Originator();
    Originator(const string& std);
    ~Originator();

    Memento* CreateMemento();
    void SetMemento(Memento* men);
    void RestoreToMemento(Memento* mt);

    string GetState();
    void SetState(const string& std);
    void PrintState();

private:
    string _std;
    Memento* _mt;
};

class Memento
{
public:

private:
    friend class Originator;

    Memento();
    Memento(const string&);
    ~Memento();

    void SetState(const string&);
    string GetState();

private:
    string _std;
};

#endif // _MEMENTO_H_