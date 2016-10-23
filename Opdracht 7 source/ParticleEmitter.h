#pragma once


#include "Particle.h"

class ParticleEmitter {
public:
	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	void setColours(ofColor innerColour, ofColor outerColor);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;
};