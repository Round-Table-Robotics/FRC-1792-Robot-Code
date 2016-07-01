
#include "WPILib.h"

class Robot: public IterativeRobot
{

	RobotDrive myRobot; // robot drive system
	Joystick stick,xbox; // only joystick
	LiveWindow *lw;

	float speed;



public:
	void RobotInit() override {
	}
	Robot() :
	myRobot(0,1),
	stick(5),
	xbox(0),
	lw(LiveWindow::GetInstance()),

	speed(0)
	{
		myRobot.SetExpiration(0.1); //Code from Example
		// gyro.InitGyro();
	}

private:
	void AutonomousInit()	//Initialize Autonomous
	{

	}

	void AutonomousPeriodic()	//Start Autonomous
	{

	}

	void TeleopInit()		//Initiate Teleoperated
	{

	}

	void TeleopPeriodic()	//Teleoperated Begins
	{

	}

	//Dunno what to do with this
	void TestPeriodic()
	{
		lw->Run();
	}
};

