#include "Log.h"
#include <iostream>

void Log::Setlevel(Level level) {
	m_loglevel = level;
}

void Log::error(const char* message) {
	if (m_loglevel >= Error)
		std::cout << "[Error]: " << message << std::endl;
}

void Log::warn(const char* message) {
	if (m_loglevel >= Warning)
		std::cout << "[Warning]: " << message << std::endl;
}

void Log::info(const char* message) {
	if (m_loglevel >= Info)
		std::cout << "[Info]: " << message << std::endl;
}
/*Log log;
	log.Setlevel(Log::Warning);
	log.warn("Hellow1");
*/