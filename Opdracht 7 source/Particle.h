#pragma once

#include "ofMain.h"

class Particle {
public:
	Particle(int startX, int startY);
	virtual ~Particle();

	virtual void move();

	void draw();

	void setColours(ofColor center, ofColor inner, ofColor outer);

	bool isDead();

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;
	int MAX_LIFETIME;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;
};