#include "Perso.cpp"
<<<<<<< Updated upstream
#include <iostream>
=======
#include <iostream>
#include <time.h>

int main(){

    myTeam Ganki;
    enemie Pharac;
    int choix;
    int choixM = rand()%2-1;

    while (myTeam.getVie()>0 || enemie.getVie()>0){       
    
        cout << "vie: " << Ganki.getVie();

        
        cout << "vie: " << Pharac.getVie();


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
            Houchic.setPv(-10);
            break;
        case 2:
            cout << "Pharac utilise rafale de plume, vous perdez 5 PV " ;
            Houchic.setPv(-5);
            break;
        }





























    }
    return 0;
}
>>>>>>> Stashed changes
