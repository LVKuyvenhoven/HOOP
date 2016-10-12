#pragma once

#include "Particle.h"

class PEmitter {
public:
	static PEmitter* instance();

	void normalMethod();

	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	void setColours(ofColor center, ofColor innerColour, ofColor outerColour);

	Particle* emit();

private:

	static PEmitter* theChosenOne;
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor center;
	ofColor inner;
	ofColor outer;
};
