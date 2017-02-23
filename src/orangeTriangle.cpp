

#include "orangeTriangle.hpp"

orangeTriangle::orangeTriangle(){
    catchUpSpeed = 0.08f;
}

void orangeTriangle::draw(){
    ofFill();
    ofSetColor(255,127,80);
    ofDrawTriangle(pos.x, pos.y, pos.x+20, pos.y+10, pos.x-20, pos.y+20);
    
}

void orangeTriangle::zenoToPoint(float catchX, float catchY){
    pos.x = pos.x+1.414*(catchX - pos.x)/ofDist(pos.x,pos.y,catchX,catchY);
    pos.y = pos.y+1.414*(catchY - pos.y)/ofDist(pos.x,pos.y,catchX,catchY);
}
