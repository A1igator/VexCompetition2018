#pragma config(Motor,  port2,           frontRightMotor, tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port3,           backRightMotor, tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port4,           middleRightMotor, tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port5,           middleLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           frontLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           backLeftMotor, tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while(1 == 1)
  {
    motor[middleLeftMotor]  = vexRT[Ch3] + vexRT[Ch4];
    motor[frontLeftMotor]  = vexRT[Ch3] + vexRT[Ch4];
    motor[backLeftMotor]  = vexRT[Ch3] + vexRT[Ch4];
    motor[middleRightMotor] = vexRT[Ch3] - vexRT[Ch4];
    motor[backRightMotor] = vexRT[Ch3] - vexRT[Ch4];
    motor[frontRightMotor] = vexRT[Ch3] - vexRT[Ch4];
    wait1Msec(10);
  }
}

