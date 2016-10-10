#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	int lifetime;
	ofVec2f spin;

	ofColor centerColour;
	ofColor innerColour;
	ofColor outerColour;

	Particle();

	void setup();

	void move();

	void draw();
};