#pragma once

#include "ofMain.h"
#include "ofxJSONElement.h"

class testApp : public ofBaseApp {
	
	public:
		
		void setup();
		void draw();
			
		ofxJSONElement result;
};

