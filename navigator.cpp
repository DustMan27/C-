#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

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
            x_position = x_position + 1;
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
                cout << "Wildrat Appeared!" << endl;
                int wildrat_hp = 12;
                while (wildrat_hp > 0 && battle_command != 0){
                    cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                    cin >> battle_command;
                    if (battle_command == 1){
                        cout << "You attack the enemy!" << endl;
                        battle_attack = rand() % 10;
                        cout << "You do " << battle_attack << " amount of damage!" << endl;
                        wildrat_hp = wildrat_hp - battle_attack;
                        cout << "Wildrat now has " << wildrat_hp << " HP!" << endl;
                        battle_command = 9;
                    if (battle_command == 2){
                        cout << "You ran away!" << endl;
                        wildrat_hp = 0;
                        }
                    if (wildrat_hp <= 0){
                        battle_initiator = 0;
                        cout << "Victory!" << endl;
                        enemy_picker = 0;
                    }
                    }
                }
            }
            if (enemy_picker == 2){
                cout << "Wildkat Appeared!" << endl;
                int wildkat_hp = 12;
                while (wildkat_hp > 0 && battle_command != 0){
                    cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                    cin >> battle_command;
                    if (battle_command == 1 && battle_command != 0){
                        cout << "You attack the enemy!" << endl;
                        battle_attack = rand() % 10;
                        cout << "You do " << battle_attack << " amount of damage!" << endl;
                        wildkat_hp = wildkat_hp - battle_attack;
                        cout << "Wildkat now has " << wildkat_hp << " HP!" << endl;
                        battle_command = 9;
                    if (battle_command == 2){
                        cout << "You ran away!" << endl;
                        wildkat_hp = 0;
                        }
                    if (wildkat_hp <= 0){
                        cout << "Victory!" << endls;
                        battle_initiator = 0;
                        enemy_picker = 0;
                    }
                    }
                }
            }
                        if (enemy_picker == 3){
                cout << "Wildbat Appeared!" << endl;
                int wildbat_hp = 20;
                ;
                while (wildbat_hp > 0 && battle_command != 0){
                    cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                    cin >> battle_command;
                    if (battle_command == 1){
                        cout << "You attack the enemy!" << endl;
                        battle_attack = rand() % 10;
                        cout << "You do " << battle_attack << " amount of damage!" << endl;
                        wildbat_hp = wildbat_hp - battle_attack;
                        cout << "Wildbat now has " << wildbat_hp << " HP!" << endl;
                        battle_command = 9;
                    if (battle_command == 2){
                        cout << "You ran away!" << endl;
                        wildbat_hp = 0;
                        }
                    if (wildbat_hp <= 0){
                        cout << "Victory!" << endl;
                        battle_initiator = 0;
                        enemy_picker = 0;
                    }
                    }
                }
            }
                        if (enemy_picker == 4){
                cout << "Tiger Appeared!" << endl;
                int tiger_hp = 20;
                while (tiger_hp > 0 && battle_command != 0){
                    cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                    cin >> battle_command;
                    if (battle_command == 1){
                        cout << "You attack the enemy!" << endl;
                        battle_attack = rand() % 10;
                        cout << "You do " << battle_attack << " amount of damage!" << endl;
                        tiger_hp = tiger_hp - battle_attack;
                        cout << "Tiger now has " << tiger_hp << " HP!" << endl;
                        battle_command = 9;
                    if (battle_command == 2){
                        cout << "You ran away!" << endl;
                        tiger_hp = 0;
                        }
                    if (tiger_hp <= 0){
                        cout << "Victory!" << endl;
                        battle_initiator = 0;
                        enemy_picker = 0;
                    }
                    }
                }
            }
                            if (enemy_picker == 5){
                cout << "Ghoul Appeared!" << endl;
                int ghoul_hp = 20;
                while (ghoul_hp > 0 && battle_command != 0){
                    cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Escape" << endl;
                    cin >> battle_command;
                    if (battle_command == 1){
                        cout << "You attack the enemy!" << endl;
                        battle_attack = rand() % 10;
                        cout << "You do " << battle_attack << " amount of damage!" << endl;
                        ghoul_hp = ghoul_hp - battle_attack;
                        cout << "Ghoul now has " << ghoul_hp << " HP!" << endl;
                        battle_command = 9;
                    }
                    if (battle_command == 2){
                        cout << "You ran away!" << endl;
                        ghoul_hp = 0;
                        }
                    if (ghoul_hp <= 0){
                        cout << "Victory!" << endl;
                        battle_initiator = 0;
                        enemy_picker = 0;
                    }
                    }
                }
            }
        }
    }
