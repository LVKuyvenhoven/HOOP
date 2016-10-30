#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	emit1 = Emitter();
	emit1.setOrigin(100, 100);
	emit1.setCurvingParticleRatio(0.01);
	emit1.setColours(ofColor(255, 255, 255, 255), ofColor(255, 255, 0, 100), ofColor(255, 255, 0, 50));

	emit2 = Emitter();
	emit2.setOrigin(900, 100);
	emit2.setCurvingParticleRatio(0.99);
	emit2.setColours(ofColor(255, 255, 255, 255), ofColor(0, 255, 255, 100), ofColor(0, 255, 255, 50));

	emit3 = Emitter();
	emit3.setOrigin(450, 500);
	emit3.setCurvingParticleRatio(0.99);
	emit3.setColours(ofColor(255, 255, 255, 255), ofColor(255, 0, 255, 100), ofColor(255, 0, 255, 50));
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
		particles[i]->update();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emit1.emit();
		particles.push_back(freshParticle);

		Particle* freshParticle2 = emit2.emit();
		particles.push_back(freshParticle2);

		Particle* freshParticle3 = emit3.emit();
		particles.push_back(freshParticle3);
	}

	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}