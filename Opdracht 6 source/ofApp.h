#pragma once

#include "ofMain.h"

#include "Particle.h"

#include "ParticleReaper.h"

#include "Emitter.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	vector<Particle*> particles;

	ParticleReaper reaper;

	Emitter* emit1;
};