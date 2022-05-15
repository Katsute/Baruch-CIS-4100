#ifndef TYPE3_H
#define TYPE3_H

#include "Enemy.h"

using namespace std;

class Type3 : public Enemy {

    private:
        int ammo = 0;

    public:
        Type3();
        Type3(const string);
        Type3(const string, const int, const int, const int, const int, const int);

        int getAmmo() const;
        void setAmmo(const int);

        virtual void move_position(); // inherit
        virtual void fire_weapon(); // inherit
        virtual void update_status(); // inherit

};

#endif