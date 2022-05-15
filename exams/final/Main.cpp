#include <iostream>
#include "Enemy.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"

using namespace std;

const int MAX_ENEMY = 10;

int main() {
    srand(time(0));

    int ENEMY_POP = randInt(3, MAX_ENEMY);
    Enemy* enemy_ptr[ENEMY_POP];

    for(int i = 0; i < ENEMY_POP; i++){
        switch (randInt(0, 2)) {
            case 0:
                enemy_ptr[i] = new Type1();
                break;
            case 1:
                enemy_ptr[i] = new Type2();
                break;
            case 2:
                enemy_ptr[i] = new Type3();
                break;
        }
    }

    cout << "Generated " << ENEMY_POP << " enemies" << endl;

    while(true) {
        // all move
        for(int i = 0; i < ENEMY_POP; i++) {
            enemy_ptr[i]->move_position();
            cout << ' ';
        }
        cout << endl;

        // rand fire
        enemy_ptr[randInt(0, ENEMY_POP - 1)]->fire_weapon();
        // rand status
        enemy_ptr[randInt(0, ENEMY_POP - 1)]->update_status();

        cout << ">>> Continue? (Y/N)" << endl;
        char c;
        cin >> c;

        cout << endl;

        if(c == 'Y' || c == 'y')
            continue;
        else
            break;
    }

    return 0;
}