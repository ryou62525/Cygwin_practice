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

	Status state;

public:



};