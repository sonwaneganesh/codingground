#include <iostream>
#include "Dog.h"
using namespace std;


BaseDog::BaseDog(string nm)
{
    cout<<"BaseDog(): "<<endl;
      name = nm;
}

Dog::Dog(string nm)
{
    cout<<"Dog(): "<<endl;
   name = nm;
}

