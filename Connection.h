#ifndef CONNECTION_H
#define CONNECTION_H

/*
*HEADERS FOR THE CLASS
*/
#include<string> 
#include "Driver/sqlite3.h"

class Connection{
	public:
		Connection(std::string name_tmp);
		bool connect();
	private:
		std::string name;
		sqlite3 *db_file;
		bool is_open;
};
#endif
