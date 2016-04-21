#include<string>

using namespace std;

class Item
{
private:
    string name;
public:
    Item(string nazwa);
    void operator=(string nazwa);
};
/*
struct Equipment
{
	Item Helm;
	Item Naramienniki;
	Item Napiersnik;
	Item Lreka;
	Item Rreka;
	Item Spodnie;
	Item Buty;
	Item Ring1;
	Item Ring2;
	Item Amulet;
};
*/