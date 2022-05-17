#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std;

/**

    An enemy is approximately:

    ↓ (x,y)
    ╔════ w ════╗
    ║           ║
    h           ║
    ║           ║
    ╚═══════════╝
      (x+w,y+h) ↑

    enemy ranges include:

    ↓ (0,0)
  0 ║
100 ║     ← high →
200 ║                  @ 15-30p/s
300 ║     ← low →
400 ║
500 ║     ← ground →   @ 3p/s or 6p/s
600 ╚════════════════════════════════
                         (800, 600) ↑

    objects only move on x-axis

 */

int randInt(int, int);
bool randBool();
int randSign();

class Enemy {

    private:
        int x_position, y_position;
        int width, height;
        int status; // assume status to be health/hits

    protected:
        Enemy(string, int, int, int, int, int);
        int ID; // used for duplicates
        string name;

    public:
        int getX() const;
        void setX(int);

        int getY() const;
        void setY(int);

        int getWidth() const;
        void setWidth(int);

        int getHeight() const;
        void setHeight(int);

        int getStatus() const;
        void setStatus(int);

        virtual void move_position() = 0; // move to random pos
        virtual void fire_weapon() = 0; // expend ammo
        virtual void update_status() = 0; // damage

        // support

        void print(string) const;
        void print(string, bool) const;

        bool isAlive() const;
        bool isDead() const;

};

#endif