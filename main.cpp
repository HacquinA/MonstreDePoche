#include "Perso.cpp"
#include <iostream>
#include <time.h>

int main(){

    myTeam Ganki;
    enemie Pharac;
    int choix;
    int choixM = rand()%2-1;

    while (myTeam.getVie()>0 || enemie.getVie()>0){       

/*Starter*/
        cout << "Bienvenue dans temPauvre, le temtem des pauvres ! Tu vas pouvoir choisir entre plusieurs temtem et après tu pourras partir à l'aventure !" ;
        //cout << "vie: " << Ganki.getVie(); 
        //cout << "vie: " << Pharac.getVie();
        cout << " Voici les temtem que tu peux avoir: (1)Ganki (type elek), (2)Houchic (type mental), (3)Smazee (type feu)";

        cin << choix;

    switch (choix){
/* Si ganki*/
    case 1:
        cout << " Tu as choisi Ganki, attention ton premier combat débute!";
        cout << "Pharac sauvage apparaît ! ";
        cout << " Quelle attaque veux tu utiliser ? (1) Chaine d'eclair, (2) étincelle ."
        
        cin << choix;
            switch (choix){

            case 1:
                cout << "Vous utiliser chaine d'éclair, vous infliger 10. " ;
                Pharac.setPv(-10);
                break;
            case 2:
                cout << "Vous utiliser étincelle, vous infliger 5. " ;
                Pharac.setPv(-5);
                break;
            }

            switch (choixM){

            case 1:
                cout << "Pharac utilise bourrasque, vous perdez 10 PV " ;
                Ganki.setPv(-10);
                break;
            case 2:
                cout << "Pharac utilise rafale de plume, vous perdez 5 PV " ;
                Ganki.setPv(-5);
                break;
            }
    break;
/* Si ganki*/
    case 2:
        cout << " Tu as choisi Houchic, attention ton premier combat débute!";
        cout << "Pharac sauvage apparaît ! ";
        cout << " Quelle attaque veux tu utiliser ? (1) Psycho Sharpnel, (2) Psychose .";
        
        cin << choix;
            switch (choix){

            case 1:
                cout << "Vous utiliser psycho scharpnel, vous infliger 10. " ;
                Pharac.setPv(-10);
                break;
            case 2:
                cout << "Vous utiliser psychose, vous infliger 5. " ;
                Pharac.setPv(-5);
                break;
            }

            switch (choixM){

            case 1:
                cout << "Pharac utilise bourrasque, vous perdez 10 PV " ;
                Ganki.setPv(-10);
                break;
            case 2:
                cout << "Pharac utilise rafale de plume, vous perdez 5 PV " ;
                Ganki.setPv(-5);
                break;
            }
    break;
/* Si ganki*/
    case 3:
        cout << " Tu as choisi Smazee, attention ton premier combat débute!";
        cout << "Pharac sauvage apparaît ! ";
        cout << " Quelle attaque veux tu utiliser ? (1) Lance-Flamme, (2) Déflagration .";
        
        cin << choix;
            switch (choix){

            case 1:
                cout << "Vous utiliser lance-flamme, vous infliger 10. " ;
                Pharac.setPv(-10);
                break;
            case 2:
                cout << "Vous utiliser déflagration, vous infliger 5. " ;
                Pharac.setPv(-5);
                break;
            }

            switch (choixM){

            case 1:
                cout << "Pharac utilise bourrasque, vous perdez 10 PV " ;
                Ganki.setPv(-10);
                break;
            case 2:
                cout << "Pharac utilise rafale de plume, vous perdez 5 PV " ;
                Ganki.setPv(-5);
                break;
            }
    break;
    }




























    }
    return 0;
}
