#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetCircleResolution(100);
    gui.setup();
    gui.add(slider1.setup("range",10,1,100));
    gui.add(slider2.setup("size",20,10,100));
    gui.add(slider3.setup("red",200,0,255));
    gui.add(slider4.setup("green",200,0,255));
    gui.add(slider5.setup("blue (constant)",220,0,255));
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::drawCircle(){
    float time=ofGetElapsedTimef();

    for(int i=0;i<ofGetHeight();i+=slider1){
        float x = ofGetWidth()/(20)*sin(i*0.01+time);
        float y = i-ofGetHeight();
        
        float size = slider2+20*sin(i*0.001+time);
        
        ofSetColor(slider3+100*sin(i*0.01+time),slider4+25*sin(i*0.02+time),slider5);
        ofDrawCircle(x,y,size);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofRotateDeg(45);
        drawCircle();
        ofPopMatrix();
    
        gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
