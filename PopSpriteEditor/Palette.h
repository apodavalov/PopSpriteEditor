#pragma once
#include "Editor.h"

namespace Palette
{
	extern void Save(RGB* palette);
	extern void Load(std::string& file);
	extern uint8_t FindClosestColor(RGB rgb);
	extern uint8_t FindColor(RGB rgb, bool closest = false);
	extern uint8_t FindColorAll(RGB rgb, bool closest = false);
	extern bool IndexIsColorKey(uint8_t index);
	extern uint8_t ColorKeys[3];
}

extern RGB g_Palette[256];