#include "SPI.h"
//#include "Pixy.h"
#include "WPILib.h"

class Robot: public IterativeRobot
{
	//Pixy pixy;
	RobotDrive myRobot; // robot drive system
	Joystick stick,xbox; // only joystick
	LiveWindow *lw;

public:
	void RobotInit() override {
	}
	Robot() :
		//These must be enabled in the order declared above
		myRobot(4,5),	//Originally (1,0)
		stick(5),		//Needs to be in USB 5
		xbox(0),
		lw(LiveWindow::GetInstance())

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

START_ROBOT_CLASS(Robot);
