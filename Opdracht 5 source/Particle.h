#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle {
public:
	Particle(int startX, int startY);

	virtual void move();

	void draw();

	void update();

	void setColours(ofColor center, ofColor inner, ofColor outer);

	bool isDead();

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;
	ofVec2f spin;

	ofColor centerColour;
	ofColor innerColour;
	ofColor outerColour;

};