#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(50, 100);
	position = ofPoint(ofGetWidth() / 2,
						ofGetHeight() / 2);

	speed = ofVec2f(ofRandom(-0.1, 0.1),
		ofRandom(-1, 1));

	centerColour = ofColor(255, 255, 0, 255);
	innerColour = ofColor(255, 255, 0, 100);
	outerColour = ofColor(255, 255, 0, 50);

	spin = ofVec2f(ofRandom(-0.1, 0.1),
		ofRandom(-5, 5));
}

void Particle::setup() {

}

void Particle::move() {
	position += speed;
	spin.rotate(2);
	position += spin;
}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);
}