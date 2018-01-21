#include <iostream>

using namespace std;


class Game {
    public:
    string name;
    int hp; //health
    int ap; //attack
    int sp; //shield
    void shield(string victim, string attacker, int& hp, int& attack, int& shield);
    void attack(string attacker, string victim, int& hp, int& attack);

};
int random(int a, int b);
