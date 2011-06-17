/*
	Generic apple remote control of an ipod/iphone dock
	Author: Filipe Mondaini	
*/


//Play Button
int IRPlay[] = {
// ON, OFF (in 10's of microseconds)
	880, 436,
	60, 52,
	60, 50,
	62, 50,
	60, 50,
	62, 50,
	62, 50,
	58, 54,
	58, 52,
	60, 162,
	58, 160,
	60, 162,
	60, 160,
	60, 162,
	58, 162,
	60, 160,
	60, 160,
	60, 158,
	64, 50,
	58, 54,
	58, 52,
	60, 160,
	60, 50,
	62, 50,
	60, 52,
	60, 50,
	60, 160,
	60, 160,
	60, 160,
	64, 50,
	58, 160,
	62, 162,
	58, 162,
	58, 3882,
	884, 218,
	58, 0};

//Volume ++
int IRVolumePlus[] = {
// ON, OFF (in 10's of microseconds)
	880, 434,
	58, 52,
	58, 50,
	60, 50,
	58, 52,
	58, 48,
	62, 48,
	60, 50,
	60, 48,
	62, 158,
	60, 158,
	60, 158,
	62, 158,
	60, 158,
	58, 160,
	62, 158,
	60, 158,
	60, 158,
	62, 48,
	58, 160,
	60, 160,
	58, 54,
	56, 50,
	58, 52,
	58, 50,
	60, 50,
	58, 160,
	60, 50,
	58, 52,
	58, 160,
	58, 160,
	60, 160,
	58, 158,
	60, 3882,
	880, 216,
	60, 2802,
	880, 216,
	58, 2804,
	880, 216,
	58, 2804,
	880, 216,
	58, 0};
	
//Volume --
int IRVolumeMinus[] = {
// ON, OFF (in 10's of microseconds)
	884, 432,
	62, 50,
	60, 52,
	58, 50,
	62, 50,
	58, 52,
	60, 50,
	62, 48,
	60, 52,
	60, 160,
	58, 162,
	60, 162,
	58, 162,
	58, 162,
	62, 160,
	58, 162,
	58, 162,
	60, 160,
	60, 50,
	62, 160,
	58, 50,
	62, 162,
	58, 50,
	62, 50,
	58, 52,
	60, 48,
	62, 160,
	60, 50,
	62, 160,
	58, 50,
	62, 162,
	58, 160,
	60, 160,
	62, 3882,
	882, 214,
	60, 0};

//Forward button
int IRForward[] = {
// ON, OFF (in 10's of microseconds)
	884, 432,
	62, 50,
	60, 52,
	58, 50,
	62, 50,
	60, 52,
	60, 50,
	60, 52,
	58, 52,
	60, 160,
	60, 160,
	60, 162,
	58, 162,
	58, 160,
	62, 162,
	58, 160,
	60, 160,
	62, 50,
	60, 160,
	62, 50,
	58, 54,
	58, 162,
	58, 54,
	58, 50,
	58, 54,
	58, 160,
	62, 52,
	58, 160,
	62, 160,
	60, 50,
	62, 160,
	60, 160,
	60, 160,
	62, 3880,
	884, 214,
	60, 0};
	
//Backward button
int IRBackward[] = {
// ON, OFF (in 10's of microseconds)
	882, 432,
	64, 50,
	58, 54,
	58, 50,
	62, 50,
	60, 52,
	60, 48,
	62, 50,
	60, 52,
	60, 160,
	60, 160,
	62, 160,
	58, 162,
	58, 160,
	62, 160,
	60, 160,
	60, 160,
	62, 50,
	58, 52,
	56, 52,
	60, 52,
	56, 162,
	60, 52,
	56, 56,
	56, 52,
	58, 164,
	56, 162,
	58, 162,
	60, 160,
	58, 52,
	58, 164,
	56, 162,
	58, 160,
	60, 0};

//Power Button
int IRPower[] = {
// ON, OFF (in 10's of microseconds)
	880, 434,
	60, 52,
	58, 50,
	62, 50,
	58, 52,
	58, 50,
	62, 48,
	60, 50,
	60, 48,
	62, 160,
	58, 162,
	58, 160,
	62, 160,
	58, 160,
	60, 158,
	62, 158,
	62, 160,
	58, 52,
	60, 48,
	62, 48,
	60, 52,
	58, 50,
	60, 50,
	58, 52,
	58, 50,
	64, 158,
	58, 160,
	60, 158,
	64, 158,
	60, 160,
	58, 160,
	62, 160,
	58, 160,
	60, 3882,
	882, 216,
	60, 0};