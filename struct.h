#ifndef STRUCT_H
#define STRUCT_H

typedef struct student{
  
	char*name;
	char*password;
	char age;
	char*gender;
	int total_grade;
	int id;
	struct student *next;
		 
}std;

int admin_password=1234;
 std* head = NULL;

#endif