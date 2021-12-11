#pragma once
class c_Hero
{
	int health;
	int damag;
public:
	c_Hero();
	int getHealth() const;
	int getDamage()const;
	void steHealth(int);
	void setDamage(int);
	void print();
};

