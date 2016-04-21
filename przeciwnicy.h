using namespace std;

class przeciwnik
{
protected:
    string name;//nazwa potwora
    int LVL;    //Level potwora
    int HP;     //Życie potwora
    int ATK;    //Siła potwora
    int INT;    //Inteligencja potwora
    int DEX;    //Zręczność potwora
    int DEF;    //Obrona potwora
    int M_DEF;  //Obrona przed magią potwora
public:
    friend void attack(int);    //Wyprowadzenie ataku
    void dodge(int);    //Szansa na unik
    void defense(int);  //Zmniejszenie otrzymywanych obrażeń fizycznych
    void magicdefense(); //zmniejszenie otrzymywanych obrażeń magicznych
    int giveEXP(); //ilość zdobywanego expa po zabiciu przeciwnika
    void HPRegeneration();//Regeneracja życia

};

//wilk////////////////////////////////////////////////////////////////////
class wilk:public przeciwnik
{
public:
    wilk(string="wilk", int=1, int=35, int=5, int=0, int=10, int=3, int=0);
};
//niedźwieź////////////////////////////////////////////////////////////////////
class niedzwiedz:public przeciwnik
{
public:
    niedzwiedz(string="niedzwiedz", int=1, int=50, int=10, int=0, int=2, int=10, int=0);
};
//goblin////////////////////////////////////////////////////////////////////
class goblin:public przeciwnik
{
public:
    goblin(string="goblin", int=1, int=20, int=5, int=0, int=15, int=5, int=5);
};
//hobgoblin////////////////////////////////////////////////////////////////////
class hobgoblin:public przeciwnik
{
public:
    hobgoblin(string="hobgoblin", int=1, int=30, int=10, int=0, int=20, int=10, int=8);
};
//grzybol////////////////////////////////////////////////////////////////////
class grzybol:public przeciwnik
{
public:
    grzybol(string="grzybol", int=1, int=30, int=10, int=5, int=5, int=5, int=5);
};
//ent////////////////////////////////////////////////////////////////////
class ent:public przeciwnik
{
public:
    ent(string="ent", int=1, int=100, int=40, int=10, int=10, int=50, int=25);
};
//driada////////////////////////////////////////////////////////////////////
class driada:public przeciwnik
{
    int MP; //Mana
    void MPRegeneration();//Regeneracja many
public:
    driada(string="driada", int=1, int=30, int=5, int=15, int=10, int=3, int=5, int=50);
};
//rusalka////////////////////////////////////////////////////////////////////
class rusalka:public przeciwnik
{
    int MP; //Mana
    void MPRegeneration();//Regeneracja many
public:
    rusalka(string="rusalka", int=1, int=40, int=8, int=20, int=12, int=5, int=8, int=60);
};
//topielec////////////////////////////////////////////////////////////////////
class topielec:public przeciwnik
{
public:
    topielec(string="topielec", int=1, int=50, int=20, int=0, int=8, int=8, int=2);
};
