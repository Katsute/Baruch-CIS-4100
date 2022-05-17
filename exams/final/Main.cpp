#include <iostream>
#include "Enemy.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"

using namespace std;

const int MAX_ENEMY = 20;

int main() {
    srand(time(0));

    int num_enemy = randInt(3, MAX_ENEMY); // random amount of enemies
    Enemy* enemy_ptr[num_enemy];

    for(int i = 0; i < num_enemy; i++){ // for each enemy
        switch (randInt(0, 2)) { // create random type
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

    cout << "> Generated " << num_enemy << " enemies" << endl;

    while(true) {
        // all move
        for(int i = 0; i < num_enemy; i++) {
            enemy_ptr[i]->move_position();
            cout << ' ';
        }
        cout << endl;

        // rand fire
        enemy_ptr[randInt(0, num_enemy - 1)]->fire_weapon();
        // rand status
        enemy_ptr[randInt(0, num_enemy - 1)]->update_status();

        cout << "> Continue? (Y/N) <" << endl;
        char c;
        cin >> c;

        cout << endl;

        if(c == 'Y' || c == 'y') // exit if Y
            continue;
        else
            break;
    }

    return 0;
}