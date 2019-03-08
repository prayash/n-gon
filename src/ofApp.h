#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxKinect.h"
#include "ofxDelaunay.h"
#include "ofxPostProcessing.h"

class ofApp : public ofBaseApp {

public:

    // Lifecycle
    void setup();
    void update();
    void draw();
    void exit();

    // Events
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

private:

    // Kinect
    ofxKinect kinect;
    ofEasyCam cam;
    ofxPostProcessing postFx;

    // GUI
    bool showGui;
    ofxPanel gui;
    ofxSlider<int> colorAlpha;
    ofxSlider<float> noiseAmount;
    ofxToggle useRealColors;
    ofxSlider<int> pointSkip;

    ofMesh convertedMesh;
    ofMesh wireframeMesh;

    ofxDelaunay del;
    ofImage blob;

};
