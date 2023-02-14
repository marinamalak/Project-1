#include <string.h>
#include<stdlib.h>
#include "struct.h"
 #ifndef ADMIN_C
 #define ADMIN_C
 
 int clear_input_buffer(void) {
    int ch;
    while (((ch = getchar()) != EOF) && (ch != '\n')) 
    return ch;
}

 void Add_student(){
	  char right=1;
	  int ID,Total_grade;
	 int b= clear_input_buffer();
 	std* new=head;
	new=(std*)malloc(sizeof(std));
	puts("Enter name of student : ");
	(new->name)=(char*)malloc(sizeof(new->name)+1);
    gets(new->name);
	(new->name)[strlen(new->name)]='\0';
	puts("Enter password : ");
	(new->password)=(char*)malloc(sizeof(new->password)+1);
	gets(new->password);
	(new->password)[strlen(new->password)]='\0';	
	puts("Enter gender : ");
	(new->gender)=(char*)malloc(sizeof(new->gender)+1);
	gets(new->gender);	
	(new->gender)[strlen(new->gender)]='\0';
	printf("Enter age : ");
	scanf("%d",&new->age);	
	printf("Enter total grades : ");
	scanf("%d",&Total_grade);
while(right){
	if(Total_grade>=0 && Total_grade<=100){
		new->total_grade=Total_grade;
		right=0;
	}
	else{
		printf("   The grade must be between 0 : 100 \n");
		printf(" Enter another total grades : ");
		scanf("%d",&Total_grade);
		right=1;	
	}
 }
if(head){
  std *new1=head;	
	printf(" Enter id : ");
	scanf("%d",&ID);
	while(new1){
		if(ID == new1->id){
			printf("   This id has already been used \n");
			printf(" Enter another id : ");
			scanf("%d",&ID);
			new1=head;
		}
		else{
		new1=new1->next;
		}
	}
	new->id=ID;
}else{
	printf(" Enter id : ");
	scanf("%d",&new->id);
}
	    new->next=head;
    head=new;	
	new = new->next;
	printf("Student added successfully \n");
  }
  
 void Remove_student(){
	    int ID;
	printf("Enter student id : ");
	scanf("%d",&ID);
		if(head){
	 	std* current2=head;
    	std* previous=NULL;
	while(current2){
		if(ID == current2->id){
		 if(previous)
        previous->next=current2->next;
          else{
		  head=current2->next;
				}
            free(current2);
		printf("Student removed successfully \n");
		}
		previous=current2;
		current2=current2->next;
	}			
  }
 } 
 void View_student(){
	 int ID;
	printf("Enter student id : ");
	scanf("%d",&ID);
	  if(head){
	 std* current=head;
	  while(current){
		if(ID == current->id){
		printf("\n  Name: %s  \n",current->name );
		printf("  Password: %s  \n",current->password );
		printf("  Gender : %s  \n",current->gender );
		printf("  Age: %d  \n",current->age );
		printf("  Total grade: %d  \n",current->total_grade );
		printf("  Id: %d  \n",current->id );
		}
	  current=current->next;
	  }
	}
 }
 
 void View_all_student(){
    std* current1 = head;
		if(head==NULL)
    printf("The list is empty \n");
  else{
	while(current1){
		printf("\n  Name: %s  \n",current1->name );
		printf("  Password: %s  \n",current1->password );
		printf("  Gender : %s  \n",current1->gender );
		printf("  Age: %d  \n",current1->age );
		printf("  Total grade: %d  \n",current1->total_grade );
		printf("  Id: %d  \n",current1->id );

      current1=current1->next;	
	  }
    }
   }
void Edit_admin_pass(){
	printf("Enter new password: ");
	scanf("%d",&admin_password);
}
void Edit_std_grade(){
	char right=1;
	 int ID,Total_grade;
	printf("Enter student id : ");
	scanf("%d",&ID);
	  if(head){
	 std* current=head;
	  while(current){
		if(ID == current->id){
	printf("Enter new total grades : ");
	scanf("%d",&Total_grade);
	 while(right){
	  if(Total_grade>=0 && Total_grade<=100){
		current->total_grade=Total_grade;
		right=0;
		printf("Student total grades edited successfully \n");
	}
	else{
		printf("   The grade must be between 0 : 100 \n");
		printf(" Enter another total grades : ");
		scanf("%d",&Total_grade);
		right=1;	
	     }
        }
	  }
	    current=current->next;
	 }
   }
}
 void Admin_services(){
	char choice=1;
	   while(choice){
	printf(" your choice: ");
	scanf("%d",&choice); 
	switch(choice){
		  case 1:
            Add_student();
        break;
          case 2:
            Remove_student();
        break;
          case 3:
            View_student();
		break;
		  case 4:
	        View_all_student();
		
		  break;  
		  case 5:
		    Edit_admin_pass();
        break;
          case 6:
       Edit_std_grade();
        break;
          case 7:
		  choice=0;
		  break;
		  default:
			printf(" Wrong Choice\n");
			break;
		}		  
    }	
  }
   
 void Admin_mode(){
   printf("  *To Add Student Record choose..1\n");
   printf("  *To Remove Student Record choose..2\n");
   printf("  *To View Student Record choose..3\n");
   printf("  *To View ALL Records choose..4\n");
   printf("  *To Edit Admin Password choose..5\n");
   printf("  *To Edit Student Grade choose..6\n");
   printf("  *To Logout choose..7\n");
   Admin_services();
   }
   
 #endif