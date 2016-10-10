#pragma once

#include "Particle.h"

class Emitter {
public:
	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	void setColours(ofColor center, ofColor innerColour, ofColor outerColour);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor center;
	ofColor inner;
	ofColor outer;
};