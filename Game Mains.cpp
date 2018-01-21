#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include "Game Voids.cpp"

using namespace std;


int main()
  {
    srand ( (unsigned) time(NULL ) );
    Game t[5];
    t[0].name="Soul Destroyer";
    t[0].hp=550;
    t[0].ap=30;
    t[0].sp=20;

    t[1].name="Gandalf The Grey";
    t[1].hp=450;
    t[1].ap=40;
    t[1].sp=30;

    t[2].name="Donkey Kong";
    t[2].hp=550;
    t[2].ap=30;
    t[2].sp=20;

    t[3].name="Unicorn";
    t[3].hp = 350;
    t[3].ap=50;
    t[3].sp=40;

    t[4].name="Owl";
    t[4].hp=300;
    t[4].ap=55;
    t[4].sp=45;


    string answer, final_answer;
    int y, e;
    e=random(0,5);
    cout<<"------------------------------WELCOME TO THE GAME!-----------------------\n\n";
            cout<<"Here’s how it all works\n\nYou will choose your CHARACTER and your ENEMY from the list below. Then, you will fight each other. You have two options during the fight - SHIELD or ATTACK - and so does the opponent. You will type in either of those when it’s your turn. The game will keep going until either you or your enemy have 0 OR LESS HEALTH POINTS. The health and attack points are listed below.\n\n";

            cout<<"NAME \t\t\t HEALTH \t ATTACK\t\tSHIELD\n1 Soul Destroyer\t550\t\t30\t\t20"<<endl;
            cout<<"2 Gandalf The Grey\t450\t\t40\t\t30"<<endl;
            cout<<"3 Donkey Kong\t\t550\t\t30\t\t20"<<endl;
            cout<<"4 Unicorn\t\t350\t\t50\t\t40"<<endl;
            cout<<"5 Owl\t\t\t300\t\t55\t\t45"<<endl;
            cout<<"\n\nComputer chose your enemy: "<<e+1<<" : "<<t[e].name<<endl;
            cout<<"\nChoose your character other than enemy (write the number):\n";
            cin>>y;
            cout<<"\n\n\n-----------------------THE GAME BEGINS--------------------\n\n\n";
    Game you;
    you.name = t[y-1].name;
    you.hp=t[y-1].hp;
    you.ap=t[y-1].ap;
    you.sp=t[y-1].sp;

    Game enemy;
    enemy.name = t[e].name;
    enemy.hp=t[e].hp;
    enemy.ap=t[e].ap;
    enemy.sp=t[e].sp;

    do {

  	            while ( enemy.hp > 0 || you.hp >0) {

                        int i = 1;
                        cout<<"\n------------------------------------------------------------------------";
                        cout<<"\n\nDo you want to attack or use your shield? Type in either ATTACK or SHIELD\n";
                        cin>>answer;
                        if (answer == "ATTACK") {
                            if (i%2 == 0) {
                                enemy.shield(enemy.name, you.name, enemy.hp, you.ap, enemy.sp);
                                cout<<"\n\n\tYOUR HEALTH\t"<<you.hp<<endl;
                                cout<<"\n\tENEMY'S HEALTH\t"<<enemy.hp<<endl<<endl;
                                _sleep(1000);
                            }
                            else {
                                you.attack(you.name, enemy.name, enemy.hp, you.ap);
                                enemy.attack(enemy.name, you.name, you.hp, enemy.ap);
                                cout<<"\n\n\tYOUR HEALTH\t"<<you.hp<<endl;
                                _sleep(850);
                                cout<<"\n\tENEMY'S HEALTH\t"<<enemy.hp<<endl<<endl;
                                _sleep(1000);
                            }
                        }
                        else if (answer == "SHIELD") {
                            you.shield(you.name, enemy.name, you.hp, enemy.ap, you.sp);
                            cout<<"\n\n\tYOUR HEALTH\t"<<you.hp<<endl;
                            _sleep(850);
                            cout<<"\n\tENEMY'S HEALTH\t"<<enemy.hp<<endl;
                            _sleep(1000);
                        }
                        i++;
                        if (enemy.hp <=0 && you.hp > 0) {
                            cout<<"\n\n-------------------------CONGRATULATIONS! YOU WON!-----------------------------";
                            cout<<"\nDo you want to play again? Type YES or NO"<<endl;
                            cin>>final_answer;
                        }
                        else if (you.hp <=0) {
                            cout<<"\n\n------------------GAME OVER     Sorry, you lost!------------------\n\n";
                            cout<<"\nDo you want to play again? Type YES or NO"<<endl;
                            cin>>final_answer;
                        }

  	            }
    } while (final_answer !="NO");
    cout <<"\n\nThanks for playing!";
 }
