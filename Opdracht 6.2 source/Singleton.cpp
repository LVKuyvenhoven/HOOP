#include "Singleton.h"

Particle* PEmitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new Particle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColours(center, inner, outer);

	return newParticle;
}

void PEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void PEmitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void PEmitter::setColours(ofColor centerColour, ofColor innerColour, ofColor outerColour) {
	center = centerColour;
	inner = innerColour;
	outer = outerColour;
}

PEmitter* PEmitter::instance() {
	if (!PEmitter::theChosenOne) {
		PEmitter::theChosenOne = new PEmitter();
	}
	return PEmitter::theChosenOne;
}

PEmitter* PEmitter::theChosenOne = 0;