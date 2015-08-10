#pragma once
#include "HistoryLog.h"

class Log_VertexAdjacentPush :
	public HistoryLog
{
public:
	const size_t index;

public:
	Log_VertexAdjacentPush(size_t theTarget,size_t index);
	std::string toString()
	{
		char temp[256];
        sprintf(temp,"\t\t\t<Log Type=\"VertexAdjacentPush\" Target=\"%d\" Index=\"%d\" />\n",target,index);
		std::string out(temp);
		return out;
	};

			void operator=(const Log_VertexAdjacentPush& in) 
	{
		in;
	};
public:
	~Log_VertexAdjacentPush(void);
};