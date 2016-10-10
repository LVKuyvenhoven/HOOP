#pragma once

#include "ofMain.h"

#include "Particle.h"

#include "Emitter.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	vector<Particle*> particles;

	Emitter emit1;
	Emitter emit2;
};