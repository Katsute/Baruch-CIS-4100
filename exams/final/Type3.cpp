#include "Type3.h"

const string names[3] = {"Soldier", "Robot", "BadCop"};
const int LEN = 3;

const static int SPEED = 3;

const static int HEIGHT = 500;

const int MIN_HP = 4;
const int MAX_HP = 5;

// constructors

Type3::Type3() : Type3(names[rand() % LEN]) {}
Type3::Type3(const string name) : Type3(name, randInt(MIN_HP, MAX_HP), randInt(0, 800), HEIGHT, 10, 10){}
Type3::Type3(const string name, const int status, const int x, const int y, const int w, const int h) : Enemy(name, status, x, y, w, h){
    static int ID = 0;
    this->ID = ++ID;
    this->ammo = randInt(1, 7);
}

// ammo

int Type3::getAmmo() const {
    return this->ammo;
}

void Type3::setAmmo(const int ammo) {
    this->ammo = ammo;
}

// overrides

void Type3::move_position() {
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

void Type3::fire_weapon() {
    if(isDead()){
        print("Dead! No weapon was fired");
    }else if(ammo <= 0){
        print("Empty! No weapon was fired");
    }else{
        print("Fired shot! " + to_string(--ammo) + " left");
    }
}

void Type3::update_status() {
    if(isDead()){
        print("Already dead! Status was 0");
    }else{
        int ns = getStatus() - 1;
        setStatus(ns);
        if(ns > 0)
            print("HIT! Status is now " + to_string(ns));
        else
            print("KILL! Status is now 0");
    }
}