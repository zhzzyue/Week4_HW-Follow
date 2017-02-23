#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "orangeTriangle.hpp"
#include "redCircle.hpp"

class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();
        void mouseMoved(int x, int y);

		rectangle myRectangle;
        orangeTriangle myOrangeTriangle;
        redCircle myRedcircle;
    
    ofFbo fbo;
    
};

#endif
