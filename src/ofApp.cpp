#include "ofApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){


// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(30,30,30,10);

	// set the position of the rectangle:
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    
    myOrangeTriangle.pos.x = 60;
    myOrangeTriangle.pos.y = 50;
    
    myRedcircle.pos.x = 30;
    myRedcircle.pos.y = 20;
    
    // set Fbo
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);  // higher precision alpha (no artifacts)
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
}

//--------------------------------------------------------------
void ofApp::update(){
	myRectangle.zenoToPoint(mouseX, mouseY);
    
    myOrangeTriangle.zenoToPoint(mouseX, mouseY);
    
    myRedcircle.zenoToPoint(mouseX, mouseY);
    
    int mouseX = 0;
    int mouseY = 0;
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    
	myRectangle.draw();
    
    myOrangeTriangle.draw();
    
    myRedcircle.draw();
    
    
    fbo.begin();
    ofSetColor(0,0,0, 10); // black with alpha
    ofDrawRectangle(0, 0, 10, 10);
    ofSetColor(0,0,255);
    

}
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    mouseX = x;
    mouseY = y;
}
