#pragma once


#include "Particle.h"

class ParticleEmitter {
public:
	const void setOrigin(int x, int y);

	const void setCurvingParticleRatio(float ratio);

	const void setColours(ofColor innerColour, ofColor outerColor);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;
};