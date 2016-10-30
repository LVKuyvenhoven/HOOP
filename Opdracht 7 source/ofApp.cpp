#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);
	emitter1 = ParticleEmitter();
	emitter1.setOrigin(500, 400);
	emitter1.setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
	emitter1.setCurvingParticleRatio(0.1);
}

void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emitter1.emit();
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

void ofApp::keyPressed(int key) {
}