using namespace std;

class myTeam{
    private:
        int vie;
        int attaque1;
        int attaque2;
        int attaque3;
        int attaque4;
    public:
        int getVie();
        int getAttaque();
        void setPv(int);
        myTeam();

};

class enemie{
    private:
        int vie;
        int attaque1;
        int attaque2;
        int attaque3;
        int attaque4;
    public:
        int getVie();
        int getAttaque();
        void setPv(int);
        enemie();

};