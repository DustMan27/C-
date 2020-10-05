#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void battle(string monster_name, int monster_hp, int monster_atk){ //Declare the values of the functions variables within the code.
            cout << monster_name << " Appeared!" << endl;
            while (monster_hp > 0 && battle_command != 0){
                cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                cin >> battle_command;
                if (battle_command == 1){
                    cout << "You attack the enemy!" << endl;
                    battle_attack = rand() % 10;
                    cout << "You do " << battle_attack << " amount of damage!" << endl;
                    monster_hp = monster_hp - battle_attack;
                    cout << monster_name << " now has " << monster_hp << " HP!" << endl;
                    battle_command = 9;
                if (battle_command == 2){
                    cout << "You ran away!" << endl;
                    monster_hp = 0;
                    }
                if (monster_hp <= 0){
                    battle_initiator = 0;
                    cout << "Victory!" << endl;
                    enemy_picker = 0;
                }
    }

int main(){
    //
    char direction_input = 'X';
    int x_position = 0;
    int y_position = 0;
    int battle_initiator = rand() % 100;
    int active_movement = 1;
    int battle_command = 9; //9 is the deafult value as zero is when the command loop is termianted.
    int player_damage = 0;
    int battle_attack = 0;
    while (active_movement == 1){ //This is a loop which allows the user to continuously choose which direction to go. Only if an event occurs should this loop be broken for some other action.
        cout << "You are currently locateds at coordinates (" << x_position << "," << y_position << ")" << endl;
        cout << "Please enter if you would like to go up (W), down(S), left(A) or right.(D): ";
        cin >> direction_input;
        if (direction_input == 'w'){
            x_position = x_position + 1;s
        } else if (direction_input == 's'){
            x_position = x_position - 1;
        } else if (direction_input == 'a'){
            y_position = y_position - 1;
        } else if (direction_input == 'd'){
            y_position = y_position +1;
        } else {
            cout << "Incorrect choice!" << endl;
        }
        battle_initiator = rand() % 100; //Generates a number between 0 and 99
        if (battle_initiator > 60){ //If above 60 then it initiates this code.
            cout << "[[BATTLE INITIATING]]" << endl;
            int enemy_picker = 5;
            enemy_picker = rand() % 5 + 1;
            if (enemy_picker == 1){
                battle(Rat, 5, 10);
            }
            if (enemy_picker == 2){
                battle(Cat, 7, 12);
            }
            if (enemy_picker == 3){
                battle (Bat, 9, 3);
            }
            if (enemy_picker == 4){
                battle (Panther, 15, 12);
            }
            if (enemy_picker == 5){
                battle (Tiger, 20, 21);
                }
            }
        }
    }
