#pragma once

#include "ofMain.h"

#include "Particle.h"

#include "ParticleReaper.h"

#include "Singleton.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	vector<Particle*> particles;

	ParticleReaper reaper;

	PEmitter emit1;
};