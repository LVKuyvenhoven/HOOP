#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	PEmitter::instance();
	PEmitter::instance()->setOrigin(500, 400);
	PEmitter::instance()->setCurvingParticleRatio(0.01);
	PEmitter::instance()->setColours(ofColor(255, 255, 255, 255), ofColor(255, 255, 0, 100), ofColor(255, 255, 0, 50));
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
		particles[i]->update();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emit1.emit();
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