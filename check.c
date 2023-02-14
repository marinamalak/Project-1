
#include "struct.h"
#include "admin.h"

#ifndef CHECK_H
#define CHECK_H
int check_admin()
{
	int check=0;
	for(int i=0;i<3;i++)
	{
		int user_pass;
		printf("Enter Password: ");
		scanf("%d",&user_pass);
		if(user_pass==admin_password)
		{
			check=1;
			printf("\t\tWelcome \n");
			 Admin_mode();
			return 1;
		}
		if(check==0)
		{
			printf("\n  Wrong Password\n");
		}
	}
	return 0;
}
int check_user()
{
	int check=0,i;
	printf("\n\t\tLog In\n");
	for( i=0;i<3;i++)
	{
		int entered_id;
		printf("Id :");
		scanf("%d",&entered_id);
		char entered_pass[20];
		printf("Password : ");
		scanf("%s",&entered_pass);
		if(head)
		{
			 std* selected=head;
			  while (selected){
				if(strcmp(selected->password,entered_pass)==0 && selected->id==entered_id)
				{
					check=1;
					current_user=selected;
					printf("  Welcome \n");
					return 1;
				}
				selected=selected->next;
			  }
		}
		if(check==0)
		{
			printf("\n  Wrong Password\n");
		}
	}
	return 0;
}
void check_mode()
{
	printf("   Choose Your Mode:\n");
	printf("   *To Admin Mode choose..1\n");
	printf("   *To User Mode choose..2\n");
    printf("   *To Logout choose..3\n");

	char choice=1;
	 while(choice){
	printf(" your choice: ");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
			check_admin();
			break;
		case 2:
			check_user();
			break;
        case 3 :
		    choice=0;
		    break;
		default:
			printf("Wrong Choice\n");
			break;
	   }
	 }
}

#endif