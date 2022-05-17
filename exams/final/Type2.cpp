#include "Type2.h"

const string names[3] = {"Jet", "Helicopter", "Drone"};

const int MIN_SPEED = 15;
const int MAX_SPEED = 30;

const int LOW_HEIGHT = 300;
const int HIGH_HEIGHT = 100;

const int MIN_HP = 7;
const int MAX_HP = 8;

// constructors

Type2::Type2() : Type2(names[randInt(0, 2)]) {}
Type2::Type2(const string name) : Type2(name, randInt(MIN_HP, MAX_HP), randInt(0, 800), name == "Drone" ? LOW_HEIGHT : HIGH_HEIGHT, 10, 10){}
Type2::Type2(const string name, const int status, const int x, const int y, const int w, const int h) : Enemy(name, status, x, y, w, h){
    static int ID = 0;
    this->ID = ++ID;
    this->ammo = randInt(1, 7);
}

// ammo

int Type2::getAmmo() const {
    return this->ammo;
}

void Type2::setAmmo(const int ammo) {
    this->ammo = ammo;
}

// overrides

void Type2::move_position() {
    if(isDead()){
        print("did not move (" + to_string(getX()) + ", " + to_string(getY()) + ")", false);
    }else{
        int SPEED = randInt(MIN_SPEED, MAX_SPEED);

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

void Type2::fire_weapon() {
    if(isDead())
        print("Dead! No weapon was fired");
    else if(ammo <= 0)
        print("Empty! No weapon was fired");
    else
        print("Fired a missile! " + to_string(--ammo) + " left");
}

void Type2::update_status() {
    if(isDead()){
        print("Already dead! Status was 0");
    }else{
        int ns = getStatus() - 1;
        setStatus(ns);
        if(ns > 0)
            print("BANG! Status is now " + to_string(ns));
        else
            print("BOOM! Status is now 0");
    }
}