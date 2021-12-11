#include "c_Hero.h"
#include<iostream>

c_Hero::c_Hero()
{
	this->health = 100;
	this->damag = 100;
}

int c_Hero::getHealth() const
{
	return this->health;
}

int c_Hero::getDamage() const
{
	return this->damag;
}

void c_Hero::steHealth(int x)
{
	this->health = x;
}

void c_Hero::setDamage(int x)
{
	this->damag = x;
}

void c_Hero::print()
{
	std::cout << "Health: " << this->health << "\tDamage: " << this->damag << "\n";
}

int c_Hero::hit()
{
	return this->health-=10;
}
