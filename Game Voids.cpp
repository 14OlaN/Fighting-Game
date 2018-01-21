#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int random(int a, int b)
{
    return rand()%(b-a+1)+a;
}

class Game {
    public:
    string name;
    int hp; //health
    int ap; //attack
    int sp; //shield

void attack(string attacker, string victim, int& hp, int& attack) {
    srand ( (unsigned) time(NULL ) );
    int u = random (1,10);
    if (u%2==0) {
        hp = hp - attack;
        cout<<"\n\t"<<attacker<<" attacked "<<victim<<endl;
        _sleep(850);
    }
    else {
        cout<<'\n'<<attacker<<" missed!\n";
    }
}

void shield(string victim, string attacker, int& hp, int& attack, int& shield) {
	srand ( (unsigned) time(NULL ) );
	int u = random (1,10);
    if (u%2==0) {
        hp = hp - attack + shield;
        cout<<"\n\t\t"<<attacker<<" attacked "<<victim<<endl;
        _sleep(850);
        cout<<"\t\t"<<victim<<" used shield\n\n";
        _sleep(850);
    }
    else
        cout<<"\n\t"<<attacker<<" missed!";
}
};
