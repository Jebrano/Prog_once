#pragma once
class Log
{
public:
	enum Level
	{
		Error, Warning, Info
	};

private:
	Level m_loglevel = Info;

public:
	void Setlevel(Level level);
	void warn(const char* message);
	void error(const char* message);
	void info(const char* message);
};
/*To run this class just add this in the main()

Log log;
	log.Setlevel(log.loglevelwarning);
	log.Warn("Hellow1");

*/
