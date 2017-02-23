

#ifndef orangeTriangle_hpp
#define orangeTriangle_hpp

#include <stdio.h>
#include "ofMain.h"

class orangeTriangle{
public:
    
    orangeTriangle();
    void draw();
    void zenoToPoint(float catchX, float catchY);
    
    ofPoint pos;
    float catchUpSpeed;
    
    
};

#endif /* orangeTriangle_hpp */
