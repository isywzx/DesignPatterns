#ifndef _SIGNLETON_H_
#define _SINGLETON_H_

class Singleton
{
public:
    static Singleton* Instance();
    
protected:
    Singleton();

private:
    static Singleton* _instance;
};

#endif // _SINGLETON_H_