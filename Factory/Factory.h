#ifndef _FACTORY_H
#define _FACTORY_H

class Product;

class Factory
{
public:
   virtual ~Factory() = 0;

   virtual Product* CreateProduct() = 0;

protected:
    Factory();
};

class ConcerteFactory : public Factory
{
public:
    ConcerteFactory();
    ~ConcerteFactory();

    Product* CreateProduct();
};

#endif // _FACTORY_H