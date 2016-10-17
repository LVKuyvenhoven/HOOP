#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	emit1 = Emitter::instance();
	emit1->setOrigin(500, 400);
	emit1->setCurvingParticleRatio(0.01);
	emit1->setColours(ofColor(255, 255, 255, 255), ofColor(255, 255, 0, 100), ofColor(255, 255, 0, 50));
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
		particles[i]->update();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emit1->emit();
		particles.push_back(freshParticle);
	}

	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}