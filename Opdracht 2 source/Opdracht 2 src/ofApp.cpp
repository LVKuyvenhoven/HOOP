#include "ofApp.h"

void ofApp::setup() {
	part1 = Particle();
}

void ofApp::update() {
	part1.move();
}

void ofApp::draw() {
	part1.draw();
}