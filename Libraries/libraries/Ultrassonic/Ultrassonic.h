#include "Arduino.h"

#ifndef Ultrassonic_h
#define Ultrassonic_h

class Sonar {

public:

	void defineSonar(int URTRIG, int URPWM, char positionSensor);
	int  getFrontSonar();
	int  getLeftSonar();
	int  getRightSonar();


private:

	int URTRIG_f;
	int URPWM_f;
	int URTRIG_r;
	int URPWM_r;
	int URTRIG_l;
	int URPWM_l;

	int getDistance(char direction);

};



#endif