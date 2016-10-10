#pragma once

#include "ofMain.h"

class Particle {
public:
	Particle(int startX, int startY);

	virtual void move();

	void draw();

	void setColours(ofColor center, ofColor inner, ofColor outer);

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