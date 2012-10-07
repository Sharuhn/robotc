/*
VEX Maze Script
Code By: Apple Pi
Written with ROBOTC.
*/

task main()
{

  motor[port2] = 25;     //Move 2 Blocks
  motor[port3] = -25;
  motor[port4] = 25;
  motor[port5] = -25;
  wait1Msec(2100);
  motor[port2] = 0;      //Delay for 0250 Milisceonds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = -25;    //Rotate 90 Degrees
  motor[port3] = -25;
  motor[port4] = -25;
  motor[port5] = -25;
  wait1Msec(1450);
  motor[port2] = 0;      //Delay for 0250 Miliseconds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = 25;     //Move 5 Blocks
  motor[port3] = -25;
  motor[port4] = 25;
  motor[port5] = -25;
  wait1Msec(5200);
  motor[port2] = 0;      //Delay for 0250 Miliseconds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = 25;     //Rotate 270 Degrees
  motor[port3] = 25;
  motor[port4] = 25;
  motor[port5] = 25;
  wait1Msec(1410);
  motor[port2] = 0;      //Delay for 0250 Miliseconds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = 25;     //Move 2 Blocks
  motor[port3] = -25;
  motor[port4] = 25;
  motor[port5] = -25;
  wait1Msec(2100);
  motor[port2] = 0;      //Delay for 0250 Miliseconds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = 25;     //Rotate 270 Degrees
  motor[port3] = 25;
  motor[port4] = 25;
  motor[port5] = 25;
  wait1Msec(1500);
  motor[port2] = 0;      //Delay for 0250 Miliseconds
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);
  motor[port2] = 25;     //Move 1 Blocks
  motor[port3] = -25;
  motor[port4] = 25;
  motor[port5] = -25;
  wait1Msec(1300);

}

/*
PORT 2 and PORT 4: Use +# to go forward.
PORT 3 and PORT 5: Use -# to go forward.
PORT 2/4 (+#) PORT 3/5 (+#): Rotate right.
PORT 2/4 (-#) PORT 3/5 (-#): Rotate left.

Forward One Block: (Assuming One Block = 4x4 Tile Floor)
  motor[port2] = 25;
  motor[port3] = -25;
  motor[port4] = 25;
  motor[port5] = -25;
  wait1Msec(1000);

Delay (0250):
  motor[port2] = 0;
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
  wait1Msec(0250);

Rotate 90 Degrees:
  motor[port2] = -25;
  motor[port3] = -25;
  motor[port4] = -25;
  motor[port5] = -26;
  wait1Msec(1230);
*/
