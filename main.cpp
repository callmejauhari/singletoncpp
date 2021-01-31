#include <iostream>
using std::cout;
using std::endl;

// singleton
class Turnstile
{
    static Turnstile *turnstile;
    Turnstile() {}

public:
    static Turnstile *singletonObject();
};

Turnstile *Turnstile::turnstile = nullptr;

Turnstile *Turnstile::singletonObject()
{
    if (turnstile == NULL)
    {
        cout << "Create singleton object" << endl;
        turnstile = new Turnstile();
    }
    return turnstile;
}

int main()
{
    Turnstile *t = Turnstile::singletonObject();
    Turnstile *z = Turnstile::singletonObject();
    if(t == z) cout << "t and z is same object" << endl;
    delete t;
}