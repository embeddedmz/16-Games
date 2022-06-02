#ifndef CONNECTOR_H
#define CONNECTOR_H

#if defined(_WIN32)
	#include "WinConnector.hpp"
#elif defined(__unix__) || defined(__APPLE__)
	#include "UnixConnector.hpp"
#endif


std::string getNextMove(std::string position)
{     
    std::string str;
    position = "position startpos moves "+position+"\ngo depth 3\n";    

    str=getResponseFromEngine(position);

    int n = str.find("bestmove");  
    if (n!=-1) return str.substr(n+9,4);
             
    return "error";
}


#endif CONNECTOR_H
