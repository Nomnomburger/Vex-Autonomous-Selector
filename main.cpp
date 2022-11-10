#include "main.h"
#include "selection.h"
#include "globals.hpp"

void initialize() {
  selectorInit();
}

void autonomous() {

/* ADD THE FOLLOWING TO YOUR AUTONOMOUS FUNTION IN MAIN.CPP */
  switch (autonSelection)
	{
		case RED_1:
			// Auton function here
			break;
		case BLUE_1:
			// Auton function here
			break;

		case RED_2:
      // Auton function here
			break;
		case BLUE_2:
      // Auton function here
			break;
			
		case RED_3:
      // Auton function here
			break;
		case BLUE_3:
      // Auton function here
			break;
			
		case RED_4:
      // Auton function here
			break;
		case BLUE_4:
      // Auton function here
			break;
			
		case RED_5:
      // Auton function here
			break;
		case BLUE_5:
      // Auton function here
			break;
			
		case SKILLS:
			// Skills function here
			break;
	}

}