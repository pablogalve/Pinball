#pragma once
#include "Module.h"
#include "Globals.h"
#include "p2Point.h"
#include "ModuleTextures.h"
#include "ModulePhysics.h"

class ModulePlayer : public Module
{
public:
	ModulePlayer(Application* app, bool start_enabled = true);
	virtual ~ModulePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();
	
	int Get_health();
	int Get_score();
	int Get_PrevScore();
	int Get_Highscore();
	void teleport(); //teleport the ball from one hole to another
	void changeHealth(int newValue);
	void changePrevScore(int newValue);
	void changeHighscore(int newValue);
	void updateScore(int addScore);
	void resetScore();
	

private:
	PhysBody* ball;
	SDL_Texture* ball_texture;
	
	int initial_x;
	int initial_y;
	int current_x;
	int current_y;

	int ball_radius = 7;
	int health = 5;
	int score = 0;
	int prev_score = 0;
	int highscore = 0;

	bool ball_launched = false;
	bool game_over = false;
};