#include "Enemy.h"

#include <iostream>
#include <string>

using namespace std;

int randInt(const int min, const int max) {
    return rand() % (max - min + 1) + min;
}

bool randBool() {
    return rand() % 2 == 0;
}

int randSign() {
    return randBool() ? -1 : 1;
}

// constructor

Enemy::Enemy(const string name, const int status, const int x, const int y, const int w, const int h) {
    this->name = name;
    this->status = status;
    this->x_position = x;
    this->y_position = y;
    this->width = w;
    this->height = h;
}

// X

int Enemy::getX() const {
    return this->x_position;
}

void Enemy::setX(const int x) {
    this->x_position = x;
}

// Y

int Enemy::getY() const {
    return this->y_position;
}

void Enemy::setY(const int y) {
    this->y_position = y;
}

// W

int Enemy::getWidth() const {
    return this->width;
}

void Enemy::setWidth(const int w) {
    this->width = w;
}

// H

int Enemy::getHeight() const {
    return this->height;
}

void Enemy::setHeight(const int h) {
    this->height = h;
}

// status

int Enemy::getStatus() const {
    return this->status;
}

void Enemy::setStatus(const int status) {
    this->status = status;
}

// support

void Enemy::print(const string s) const {
    print(s, true);
}

void Enemy::print(const string s, const bool nl) const {
    cout << name << '#' << ID << ' ' << s;
    if(nl)
        cout << endl;
}

bool Enemy::isAlive() const {
    return status > 0;
}

bool Enemy::isDead() const {
    return status <= 0;
}