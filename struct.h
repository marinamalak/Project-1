
#ifndef STRUCT_H
#define STRUCT_H
#include <stdlib.h>
typedef struct student{
  
	char*name;
	char*password;
	char age;
	char*gender;
	int total_grade;
	int id;
	struct student *next;
		 
}std;

#endif