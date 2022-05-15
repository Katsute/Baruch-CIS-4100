#ifndef TYPE1_H
#define TYPE1_H

#include "Enemy.h"

using namespace std;

class Type1 : public Enemy {

    public:
        Type1();
        Type1(const string);
        Type1(const string, const int, const int, const int, const int, const int);

        virtual void move_position(); // inherit
        virtual void fire_weapon(); // inherit
        virtual void update_status(); // inherit

};

#endif