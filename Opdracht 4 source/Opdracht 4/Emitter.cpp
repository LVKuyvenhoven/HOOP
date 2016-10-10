#include "Emitter.h"

Particle* Emitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new Particle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColours(ofColor::white, inner, outer);

	return newParticle;
}

void Emitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void Emitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void Emitter::setColours(ofColor innerColour, ofColor outerColour) {
	inner = innerColour;
	outer = outerColour;
}