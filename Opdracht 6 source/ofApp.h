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

	PEmitter emit1;
	PEmitter emit2;

	ParticleReaper reaper;
};