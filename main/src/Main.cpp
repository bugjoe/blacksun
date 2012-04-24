#include "CmdArguments.h"
#include "ConfigFileParser.h"
#include "Server.h"
#include "Client.h"
#include "Logger.h"
#include <iostream>

using namespace std;
using namespace blacksun;

ConfigFileParser config;

int main(int argc, char* argv[]) {
	CmdArguments cmdArgs;
	cmdArgs.parse(argc, argv);

	Logger logger("Main");

	if(cmdArgs.contains("-s")) {
		Server server;
		server.start();
	} else if(cmdArgs.contains("-c")) {
		Client client;
		client.start();
	}

	return 0;
}