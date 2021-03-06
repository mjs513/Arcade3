/*
Name:		Hardware.h
Created:	1/7/2017 7:49:54 PM
Author:		beefviper
*/

#pragma once

#include <Arduino.h>

#include <U8x8lib.h>
#include <U8g2lib.h>

#include "Params.h"
#include "Joystick.h"
#include "Speaker.h"
#include "RanNumGen.h"

class Hardware {
	public:
		Hardware();
		Hardware(HardwareParams &hwp);
		~Hardware();

		static const int xAxisPin = 16;
		static const int yAxisPin = 19;
		static const int buttonPin = 2;
		static const int speakerPin = 3;
		static const int floatingPin = 14;
		static const SpeakerParams::Type speakerType = SpeakerParams::Passive;

		U8G2_ST7920_128X64_1_6800 screen;
		Joystick joystick;
		Speaker speaker;
		RanNumGen rng;

		void draw();
};
