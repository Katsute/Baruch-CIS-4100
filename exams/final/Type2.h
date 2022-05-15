#ifndef TYPE2_H
#define TYPE2_H

#include "Enemy.h"

using namespace std;

class Type2 : public Enemy {

    private:
        int ammo = 0;

    public:
        Type2();
        Type2(const string);
        Type2(const string, const int, const int, const int, const int, const int);

        int getAmmo() const;
        void setAmmo(const int);

        virtual void move_position(); // inherit
        virtual void fire_weapon(); // inherit
        virtual void update_status(); // inherit

};

#endif