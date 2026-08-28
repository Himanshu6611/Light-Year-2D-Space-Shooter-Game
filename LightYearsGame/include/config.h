#pragma once
#include <string>

inline std::string GetResourceDir()
{
#ifdef NDEBUG //release build
	return "assets/";
#else
	return "H:/Himanshu Projects/LightYear-main/LightYearsGame/assets/";
#endif
}
