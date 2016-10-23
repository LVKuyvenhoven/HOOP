#include "ParticleEmitter.h"
#include "CurvingParticle.h"

Particle* ParticleEmitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColours(ofColor::white, inner, outer);

	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) const {
	const float curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) const {
	const int originX = x;
	const int originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) const {
	const ofColor inner = innerColour;
	const ofColor outer = outerColor;
}