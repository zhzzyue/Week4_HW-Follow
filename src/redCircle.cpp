

#include "redCircle.hpp"

redCircle::redCircle(){
    catchUpSpeed = 0.02f;
}

void redCircle::draw(){
    ofFill();
    ofSetColor(220,20,60);
    ofDrawCircle(pos.x,pos.y, 5);
    
}

void redCircle::zenoToPoint(float catchX, float catchY){
    if(ofDist(pos.x, pos.y, catchX, catchY)<60){
        pos.x = pos.x + catchUpSpeed * (catchX-pos.x);
        pos.y = pos.y + catchUpSpeed * (catchY-pos.y);
    }else{
        pos.x = pos.x+0.5*(catchX - pos.x)/ofDist(pos.x,pos.y,catchX,catchY);
        pos.y = pos.y+0.5*(catchY - pos.y)/ofDist(pos.x,pos.y,catchX,catchY);
    }
}
