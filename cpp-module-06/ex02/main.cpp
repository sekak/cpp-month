#include <iostream>
#include <cstdlib>

class Base
{
public:
    virtual ~Base(){};
};

class A : public Base
{
	~A( void ){};

};
class B : public Base
{
	~B( void ){};

};
class C : public Base
{
	~C( void ){};

};

Base *generate(void)
{
	int	r = rand() % 3;

    if (r % 3 == 0)
        return (new A());
    else if (r % 3 == 1)
        return (new B());
    else if (r % 3 == 2)
        return (new C());
    return(nullptr);
}

void identify(Base * p)
{
     if ( dynamic_cast< A* >( p ) )
        std::cout << "A" << std::endl;
    else if ( dynamic_cast< B* >( p ) )
        std::cout << "B" << std::endl;
    else if ( dynamic_cast< C* >( p ) )
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base & p)
{
       	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main()
{
	Base	*base;


 base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	 
	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;


	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
}