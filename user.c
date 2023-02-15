#include <string.h>
#include<stdlib.h>
#include<stdio.h>
#include"struct.h"
///////////////////////
#define head NULL
///////////////////
void Student_detailes(std *state){
 /*   int id;
    printf("Enter the ID :");
    scanf("%i",&id);
    std*state=head;
    if(head){
        while(state){
            if(id==state->id){*/
                printf("Name     : %s",state->name);
                printf("Id       : %i",state->id);
                printf("Gender   : %s",state->gender);
                printf("Age      : &c",state->age);
                printf("Grade    : &i",state->total_grade);
                printf("Password : &s",state->password);
                state=state->next;
            }
            else{
                printf("Error !! Wrong ID");
            }
            /*
        }
    }
}*/
void Change_Name(std *state) {
   /* int id;
    printf("Enter the ID :");
    scanf("%i", &id);
    std *state = head;
    if (head) {
        while (state) {
            if (id == state->id) {*/
                printf("Enter the new name :");
                scanf("%c", (char *) stdin);
                gets(state->name);
                printf("Name added successfully \n");
                state = state->next;

            }else{
                printf("Error !! Wrong ID");
            }
/*
        }
    }
}*/
void Change_Password(std *state) {
  /*  int id;
    printf("Enter the ID :");
    scanf("%i", &id);
    char pass[20];
    printf("Enter the password :");
    scanf("%c", (char *) stdin);
    gets(pass);
    std *state = head;
    if (head) {
        while (state) {
            if (id == state->id && !(strcmp(pass, state->password)))*/ {
                printf("Enter the new password :");
                scanf("%c", (char *) stdin);
                gets(state->password);
                printf("password added successfully \n");
                state = state->next;
            }else{
                printf("Error !! Wrong ID or PASSWORD");
            }
}
/*
        }
    }
}*/
void check_order_user(std *state){
    int choice=0;
    printf("Hello Student !\n"
           "please choice [1] to show Your information\n"
           "       \t      [2] to change Your name \n"
           "       \t      [3] to change password \n");

    scanf("%i",&choice);
    switch(choice){
        case 1 :
            Student_detailes(&status);
            break;
        case 2 :
            Change_Name(&status);
            break;
        case 3 :
            Change_Password(&status);
            break;
    }
}
