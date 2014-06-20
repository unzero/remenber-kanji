/*
*HEADERS
*/
#include<string> 
#include "Connection.h"
#include "Driver/sqlite3.h"


Connection::Connection(std::string name_tmp){
	name = name_tmp;
	is_open = false;
}


bool Connection::connect(){
	if( sqlite3_open(name.c_str(),&db_file) == SQLITE_OK ){
		is_open = true;
		return true;
	}
	return false;
}
	
