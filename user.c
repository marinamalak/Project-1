#include <string.h>
#include<stdlib.h>
#include<stdio.h>
#include"struct.h"
#include "user.h"

void Student_detailes(std *state){
                printf(" Name : %s\n",state->name);
			    printf(" Gender : %s\n",state->gender);
                printf(" Id : %d\n",state->id);
                printf(" Password : %s\n",state->password);
                printf(" Age : %d\n",state->age);
                printf(" Grade : %d\n",state->total_grade);          
                state=state->next;
        }
   
void Change_Name(std *state) {
                printf("Enter the new name : ");
                scanf("%c", (char *) stdin);
                gets(state->name);
                printf("  Name edited successfully \n");
                state = state->next;        
}
void Change_Password(std *state) {

                printf("Enter the new password : ");
                scanf("%c", (char *) stdin);
                gets(state->password);
                printf("  password edited successfully \n");
                state = state->next;
          
}
void USER_services(std *state){
	char choice=1;
	   while(choice){
	printf("\n your choice: ");
	scanf("%d",&choice); 
	switch(choice){
		  case 1:
            Student_detailes(state);
        break;
          case 2:
           Change_Name(state);
        break;
          case 3:
           Change_Password(state);
		break;
          case 4:
		  choice=0;
		  break;
		  default:
			printf(" Wrong Choice\n");
			break;
		}		  
    }	
  }

void check_order_user(std *state){
	   printf("\t\t*To View Your Record choose..1\n");
       printf("\t\t*To Edit Your Name choose..2\n");	   
       printf("\t\t*To Edit Your Password choose..3\n");
       printf("\t\t*To Logout choose..4\n");
       USER_services(state);
}