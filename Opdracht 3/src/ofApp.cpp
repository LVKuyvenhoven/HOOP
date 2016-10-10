#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	emit1 = Emitter();
	emit1.setOrigin(100, 100);
	emit1.setCurvingParticleRatio(0.01);
	emit1.setColours(ofColor(255, 0, 0, 100), ofColor(255, 0, 0, 50));

	emit2 = Emitter();
	emit2.setOrigin(900, 100);
	emit2.setCurvingParticleRatio(0.99);
	emit2.setColours(ofColor(0, 255, 0, 100), ofColor(0, 255, 0, 50));
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}
	Particle* freshParticle = emit1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = emit2.emit();
	particles.push_back(freshParticle2);
}

void ofApp::draw() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}