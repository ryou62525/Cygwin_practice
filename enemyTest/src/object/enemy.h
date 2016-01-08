#pragma once
#include "../lib/framework.hpp"

struct Status
{
	Vec2f pos;
	Vec2f size;
	float speed;

	bool isActive;
};

enum class EnemyID
{
	ENEMY_01,
	ENEMY_02,
	ENEMY_03,
	MAX_ENEMY
};

class Enemy
{


protected:

	Status state;
	int hp;

public:

	void setpos(Vec2f newpos) { state.pos = newpos; }
	virtual void draw() = 0;
};

class Slime : public Enemy
{

public:

	Slime()
	{
		hp = 100;
		state.size = Vec2f(32, 32);
	}

	
	//void setpos(Vec2f newpos) { state.pos = newpos; }
	void draw() { drawFillBox(state.pos.x(), state.pos.y(), state.size.x(), state.size.y(), Color::blue); }
};

class Dragon : public Enemy
{


public:

	Dragon()
	{
		hp = 100;
		state.size = Vec2f(32, 32);
	}

	void draw() { drawFillBox(state.pos.x(), state.pos.y(), state.size.x(), state.size.y(), Color::red); }
};

#define ENEMY_LIST 3


Enemy *enemy[ENEMY_LIST] =
{
	new Slime,
	new Slime,
	new Dragon,
};

void setEnemy()
{
	Random rand;
	rand.setSeed(time(nullptr));

	for (int i = 0; i < ENEMY_LIST; ++i)
	{
		enemy[i]->setpos(Vec2f(rand(-100, 100), rand(-100, 100)));
	}
}

void testDraw()
{
	for (int i = 0; i < ENEMY_LIST; ++i)
	{
		enemy[i]->draw();
	}
}