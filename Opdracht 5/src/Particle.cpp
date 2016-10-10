#include "Particle.h"

Particle::Particle(int startX, int startY) {
	radius = ofRandom(10, 50);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	centerColour = ofColor(255, 255, 100, 255);
	innerColour = ofColor(255, 100, 255, 100);
	outerColour = ofColor(100, 255, 255, 50);

	spin = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	lifetime = 100;
}

void Particle::update() {
	for (int i = 0; i < lifetime; ++i) {
		if (i > lifetime) {

		}
	}
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}

void Particle::move() {
	for (int j = 0; j < lifetime; ++j) {
		position += speed;
		spin.rotate(10);
		position += spin;
	}
}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}