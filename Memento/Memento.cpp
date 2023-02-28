#include "Memento.h"

Originator::Originator()
{
    _std = "";
    _mt = 0;
}

Originator::Originator(const string& std)
{
    this->_std = std;
    _mt = 0;
}

Originator::~Originator()
{

}

Memento* Originator::CreateMemento()
{
    return new Memento(_std);
}

string Originator::GetState()
{
    return this->_std;
}

void Originator::SetState(const string& sdt)
{
    this->_std = sdt;
}

void Originator::PrintState()
{

}

void Originator::SetMemento(Memento* men)
{

}

void Originator::RestoreToMemento(Memento* mt)
{
    this->_std = mt->GetState();
}


Memento::Memento()
{

}

Memento::Memento(const string& sdt)
{
    this->_std = sdt;
}

string Memento::GetState()
{
    return this->_std;
}

void Memento::SetState(const string& sdt)
{
    this->_std = sdt;
}