#include "Items.h"

class gracz
{
private:
    string name;
    int HP;
    int MP;
    int LVL;
    int EXP;
    int ATK;
    int DEF;
    int M_DEF;
    int INT;
    int DEX;
    string Backpack[20];
    Equipment EQ[12];
public:
    gracz(int nazwa="None",int zycie=200,int mana=200,int lvl=1,int exp=0,int atk=10,int def=10,int mdef=10,int inteligencja=10,int dex=10);//Konstruktor gracza
    friend void Heal(gracz, string);//Leczenie za pomoc¹ przedmiotu
    void HPRegeneration();//Regeneracja ¿ycia gracza
    void MPRegeneration();//Regeneracja many gracza
    void LevelUp();//Awansowanie na wy¿szy poziom
    void getItem();//zdobycie przedmiotu
    void throwItem(int);//Wyrzucenie itemu
    void showEQ();//Poka¿ EQ
    void showBackpack();//Poka¿ zawartoœæ plecaka
    void getEXP(int);//Zdobyty exp
    void Dodge();//Unik
    void Defense(int);//Obrona
    void magicDefense(int);//Obrona przed magi¹
}
