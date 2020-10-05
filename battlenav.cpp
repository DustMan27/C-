#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int battle_command = 9; //9 is the default value as zero is when the command loop is termianted.
int battle_attack = 0;
int player_damage = 0;
int player_atk = 0;
int battle_initiator = rand() % 100;
int enemy_picker = 5;
int player_hp = 0;
int player_maxhp = 0;
int player_sp = 50;
int player_constitution = 0;
int player_level = 1;
int player_xp = 0;
int player_level_target = 100;
string player_name;
bool player_setup = false;
void level_up(){
    if (player_xp > player_level_target){
        player_level = player_level + 1;
        player_maxhp = player_maxhp*1.2;
        player_hp = player_maxhp;
        player_atk = player_atk*1.25;
        player_constitution = player_constitution*1.25;
        cout << "You level up, you are now level " << player_level << "!" << endl;
        cout << "To confirm, your stats are now as follows" << endl << "Name: " << endl << player_name << endl << "HP: " << player_hp << "/" << player_maxhp << endl << "ATK: " << player_atk << endl << "CON:" << player_constitution << endl;
        cout << "That's great, let's carry on." << endl;
        cout << "Press Enter to Continue";
        cin.ignore();
        player_level_target = player_level_target*2.5;
    }
    //code here
}
void gameover(){
    cout << "You are dead. Game over." << endl;
    exit(0);
    }
void battle(string monster_name, int monster_hp, int monster_atk, int xp_reward){ //Declare the values of the functions variables within the code.
            cout << monster_name << " Appeared!" << endl;
            while (monster_hp > 0 && battle_command != 0){
                cout << "What would you like to do?" << endl << "1. Attack" << endl << "2. Heal" << endl << "3. Escape" << endl;
                cin >> battle_command;
                if (battle_command != 1 && battle_command != 2 && battle_command != 3){
                    cout << "Wrong input, try again" << endl;
                    battle_command = 9;
                }
                if (battle_command == 1){
                    cout << "You attack the enemy!" << endl;
                    //damage is + or - 10% of atk. therefore: battle_attack = rand()% (player_atk*0.10) + player_atk
                    battle_attack = rand() % player_atk*0.1 + player_atk;
                    cout << "You do " << battle_attack << " amount of damage!" << endl;
                    monster_hp = monster_hp - battle_attack;
                    cout << monster_name << " now has " << monster_hp << " HP!" << endl;
                    if (monster_hp >= 1){
                        player_damage = rand() % 1 + monster_atk;
                        cout << monster_name << " attacks you, and does " << player_damage << " damage!" << endl;
                        player_hp = player_hp - player_damage;
                        cout << "You now have " << player_hp << "/" << player_maxhp << "HP." << endl;
                    }
                    if (monster_hp <= 0){
                        cout << "Victory!" << endl;
                        cout << "You gain " << xp_reward << "XP!" << endl;
                        player_xp = player_xp + xp_reward;
                        level_up();
                        battle_initiator = 0;
                        enemy_picker = 0;
                    }
                    battle_command = 9;
                    if (player_hp <= 0){
                        gameover();
                    }
                }
                if (battle_command == 2){
                    player_hp = player_hp + (rand() % 1 + player_constitution*1.25);
                    if (player_hp > player_maxhp){
                        player_hp = player_maxhp;
                    }
                    cout << "You heal and HP is now at: " << player_hp << "/" << player_maxhp << endl;
                    if (monster_hp >= 1){
                        player_damage = rand() % 1 + monster_atk;
                        cout << monster_name << " attacks you, and does " << player_damage << " damage!" << endl;
                        player_hp = player_hp - player_damage;
                        cout << "You now have " << player_hp << "/" << player_maxhp << "HP." << endl;
                        battle_command = 9;
                    if (player_hp <= 0){
                        gameover();
                    }
                }
                if (battle_command == 3){
                    cout << "You ran away!" << endl;
                    monster_hp = 0;
                }
                if (monster_hp <= 0){
                    cout << "Victory!" << endl;
                    cout << "You gain " << xp_reward << "XP!" << endl;
                    player_xp = player_xp + xp_reward;
                    level_up();
                    battle_initiator = 0;
                    enemy_picker = 0;
                }
        }
    }
}
int char_setup(){
    while (player_setup == false){
        cout << "Please select your character name: ";
        cin >> player_name;
        cout << endl;
        cout << "You have " << player_sp << " skill points to spend. Note that if you go over your limit, you'll have to re-enter the amount." << endl;
        cout << "Please enter your maximum HP amount: ";
        cin >> player_maxhp;
        cout << endl << "Please enter your attack: ";
        cin >> player_atk;
        cout << endl << "Please enter your constitution: ";
        cin >> player_constitution;
        cout << endl;
        if (player_maxhp + player_atk >= player_sp){
            cout << "Please try again, you spent too many points." << endl;
        } else if (player_maxhp + player_atk + player_constitution <= player_sp){
            player_hp = player_maxhp;
            cout << "To confirm, your stats are as follows" << endl << "Name: " << endl << player_name << endl << "HP: " << player_hp << "/" << player_maxhp << endl << "ATK: " << player_atk << endl << "CON:" << player_constitution << endl;
            cout << "That's great, let's play." << endl;
            cout << "Press Enter to Continue" << endl;
            cin.ignore();
            player_setup = true;
        }
    }
}
int main(){
    char_setup();
    char direction_input = 'X';
    int x_position = 0;
    int y_position = 0;
    //int battle_initiator = rand() % 100;
    int active_movement = 1;
    //int battle_command = 9; //9 is the deafult value as zero is when the command loop is termianted.
    //int player_damage = 0;
    //int battle_attack = 0;
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
            enemy_picker = rand() % 5 + 1;
            if (enemy_picker == 1){
                battle("Rat", 5, 10, 15);
            }
            if (enemy_picker == 2){
                battle("Cat", 7, 12, 19);
            }
            if (enemy_picker == 3){
                battle ("Bat", 9, 3, 12);
            }
            if (enemy_picker == 4){
                battle ("Panther", 15, 6, 27);
            }
            if (enemy_picker == 5){
                battle ("Tiger", 20, 7, 41);
                }
            }
        }
    }
s
