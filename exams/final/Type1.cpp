#include "Type1.h"

const string names[3] = {"PitBull", "Lion", "Tiger"};
const string attacks[3] = {"Hit", "Slash", "Bite"};

const int SPEED = 6;

const int HEIGHT = 500;

const int MIN_HP = 1;
const int MAX_HP = 2;

// constructors

Type1::Type1() : Type1(names[randInt(0, 2)]) {}
Type1::Type1(const string name) : Type1(name, randInt(MIN_HP, MAX_HP), randInt(0, 800), HEIGHT, 10, 10){}
Type1::Type1(const string name, const int status, const int x, const int y, const int w, const int h) : Enemy(name, status, x, y, w, h){
    static int ID = 0;
    this->ID = ++ID;
}

// overrides

void Type1::move_position() {
    if(isDead()){
        print("did not move (" + to_string(getX()) + ", " + to_string(getY()) + ")", false);
    }else{
        int nx; // x increment

        int lx = getX() - SPEED; // minimum x bound
        int rx = getX() + getWidth() + SPEED; // maximum x bound

        if (lx > 0 && rx <= 800)
            nx = randSign() * SPEED;
        else if (lx < 0)
            nx = +SPEED;
        else // rx > 800
            nx = -SPEED;
        setX(getX() + nx);
        print("moved to (" + to_string(getX()) + ", " + to_string(getY()) + ")", false);
    }
}

void Type1::fire_weapon() {
    if(isDead())
        print("Dead! Could not attack");
    else
        print(attacks[randInt(0, 2)] + '!');
}

void Type1::update_status() {
    if(isDead()){
        print("Already dead! Status was 0");
    }else{
        int ns = getStatus() - 1;
        setStatus(ns);
        if(ns > 0)
            print("OUCH! Status is now " + to_string(ns));
        else
            print("KILL! Status is now 0");
    }
}