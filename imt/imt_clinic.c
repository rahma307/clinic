#include <stdlib.h>
#include <stdio.h>
//#include "LINKED_LIST.h"

typedef struct node {
	int ID ;
	int age ;
	int name[100];
	int gender[20];
	char slot ;
	struct node *next ;
} Node ;

char arr [5]={1,2,3,4,5};
  char time_index ;
  int  age1 ;
 int name1 [100];
 int gend1[20];
 char **time ;
Node *head    = NULL ;
Node *current = NULL;
Node *printing = NULL;
int  i_d =0 ;
 char **strings  ;

/*INSERT AT FIRS */

 void InsertAtFirst(  int age_n , int *name_n , int *gender_n){
	 int i=0;
	 int j =0 ;
	 int u=0; 
/*  step1 create a node and store the address of  present node in a temporry pointetr  */
Node *temp = (Node *)malloc(sizeof(Node));
 i_d++;
	 
/*  step2 update data with input parameter  */
       temp-> ID = i_d ;
       temp->age = age_n;
	   while(name_n[i]!='\0'){
         temp->name[i]=name_n[i];
         i++;
         }
		 
	   while(gender_n[j]!='\0'){
         temp->gender[j]=gender_n[j];
         j++;
         }
  
/* step3 make the next pointer of the allocated node points to the next node   */  
	   temp-> next = head;
 
/*  head = allocated pointer  */
	   head = temp ;
 	   
 }
 
 /*********************************************************************************************/
 
 /*INSERT AT LAST */
 
 void InsertAtLast (  int age_n , int * name_n , int *gender_n){
	Node *temp = (Node *)malloc(sizeof(Node));
 int i=0;
 int j=0;
 
/*  step2 update data with input parameter  */
       temp-> ID = i_d ;
       temp->age = age_n;
	   while(name_n[i]!='\0'){
         temp->name[i]=name_n[i];
         i++;
         }
       temp->name[i]='\0';
	   while(gender_n[j]!='\0'){
         temp->gender[j]=gender_n[j];
         j++;
         }
       temp->gender[j]='\0';
  // printf("%d\n",temp-> Data);
/* step3 make the next pointer of the allocated node points to the next node   */  
	   temp-> next = NULL;
	if( head == NULL ){
		head = temp;
	}
	else{
		current = head ;
		while( current != NULL){
			current = current-> next ;
			}
		current->next = temp ;
	i_d++; 
	
 }}	
 
  /*********************************************************************************************/
	 
 /*INSERT AT ANY WHERE  */

void Insert_any_where(int node_number , int age_n , int * name_n , int *gender_n ){
int i=0 ;
int j=0 ;
Node *temp =(Node *) malloc(sizeof(Node));
  temp-> ID = node_number ;
  temp->age = age_n;
  while(name_n[i]!='\0'){
     temp->name[i]=name_n[i];
     i++;
        }
  temp->name[i]='\0';
  while(gender_n[j]!='\0'){
      temp->gender[j]=gender_n[j];
      j++;
        }
  temp->gender[j]='\0';
  current = head ;
  int count =1 ;
  while(1){
  if(count == (node_number-1)){
	 temp-> next = current->next ;
	 (temp->next)->ID = node_number+1;
	 current-> next =  temp ; 
	i_d++;
	 break ;
  }	
  else{
	current = current-> next  ;
	 count++;
 }
	
	
}
	
	
}

/*********************************************************************************************/ 
	 
 /* Delete node */
 
 void DeleteValue  ( int ID_N){
	 int flag =0 ;
	 Node *prev = NULL ;
    i_d--;

	 /* Case 1 if the list is empty */
	 if( head == NULL){
		 printf("the list is empty");
	 }
	 /* case 2 if the value is in the first node */
	 else if(head->ID == ID_N ){
		 current = head ;
		 strings[current->slot]=time[current->slot];
		 head = current->next ;
		 head->ID = i_d;  
	 

		 free(current);
		 flag =1 ;
 	 }
	 else{
		 current = head->next;
		 prev = head ;
		 while(current != NULL){
			 
			 if( current-> ID == ID_N ){
				 flag  =1 ;
				 strings[current->slot]=time[current->slot];
				 prev->next= current->next;
			  
		         head->ID = i_d; 
				 free(current);
		        
				 break ;
				  
			 }
			 
			 prev = current ;
			 current = current->next;
		 }
		 
		if( flag ==0 ){
			
			printf("the ID %d is Not found ", ID_N);
		} 
		 
	 }

}
	 
/*********************************************************************************************/

/* return address of node  */	 
	 
 
 Node*  Search  ( int ID_N){
	  int flag =0 ;
	  Node *ptr = NULL;
	 if(head == NULL){
		 printf("the list is empty");
	 }
	 else{
		 current= head ; 
		 while(current != NULL){
			 if(current->ID == ID_N ){
				flag=1 ;
				ptr = current;
				 break ;
			 }
			 current= current->next;
		  }
	 }
	 if( flag ==1){
		 return ptr ;
	 }
	 else if( flag ==0 ){
		printf("the ID %d is Not found" , ID_N); 
	 }
	 
	 
 }
 
 /*********************************************************************************************/
 
 /*  list size */
 
 int  ListSize     (   void   ){
	 return i_d;
 }
 
 
 void PrintingList (   void   ){
	printing = head ;
    int flag =1;
	int i =0 ;
	while(flag){
		if( printing->next == NULL){
			printf("\n");
			printf("ID  : %d\n",printing->ID);
		    printf("age : %d\n",printing->age);
			printf("Name : %s\n",printing->name);
			printf("Gender : %s\n",printing->gender);
	 
			flag =0 ;
		 
		}
		else{
			printf("\n");
			printf("ID  : %d\n",printing->ID);
		    printf("age : %d\n",printing->age);
			printf("Name : %s\n",printing->name);
			printf("Gender : %s\n",printing->gender);
	 
			i++;
			printing = printing->next ;
		}
	}
	 
 }
 
 /*********************************************************************************************/
 
 /* update value in node */
 
 void updatevalue  (int i_d ,int info_update ){
	  int flaggg =0 ;
      Node  *ptr = NULL ;
	  int i =0 ;
	  int j=0;
	  int u =0 ;
	  char flage =0 ;
	  char slots ;
	  int tim ;
	  static char  num =0 ;
	 if(head == NULL){
		 printf("the list is empty");
	 }
	 else{
		 current= head ; 
		 while(current != NULL){
			 if(current->ID == i_d ){
				flaggg=1 ;
				ptr = current;
				 break ;
			 }
			 current= current->next;
		  }
	 }
	 if( flaggg ==1){
	  if( info_update ==1) {
	  printf("please Enter new age ") ;
		scanf("%d",&age1);
		current->age = age1;}
	  else if(info_update ==2 ){
	 printf("please Enter new name \n");
      scanf("%s",&name1);		  
       while(name1[i]!='\0'){
        current->name[i]=name1[i];
        i++;
        }
      current->name[i]='\0';}
	 else if(info_update==3){
		 printf("please Enter new Gender \n");
            scanf("%s",&gend1);
      while(gend1[j]!='\0'){
      current->gender[j]=gend1[j];
      j++;
        }
	 current->gender[j]='\0';}
	 else if(info_update==4){
	  current->slot=time_index;
      } 
	 else if( info_update==0){
	  printf("please Enter new age ") ;
		scanf("%d",&age1);
		current->age = age1;
	 printf("please Enter new name \n");
      scanf("%s",&name1);		  
       while(name1[i]!='\0'){
        current->name[i]=name1[i];
        i++;
        }
      current->name[i]='\0';
      current->name[i]='\0';
	   printf("please Enter new Gender \n");
        scanf("%s",&gend1);
      while(gend1[j]!='\0'){
      current->gender[j]=gend1[j];
      j++;
        }
      current->gender[j]='\0';
 
 
	}
	 }
	else if( flaggg ==0 ){
		printf("the ID %d is Not found" , i_d); 
	 }
	 
	 
 }
 
 
 char  Reserve_a_slot( char **ptr){ 
	char slots ;
    static char flage =0 ;
    char num ;
 	
printf("Avaliable slots \n");
 for( int i =0 ; i<5 ; i++){
	if(ptr[i] == NULL){
		flage=1 ;
		continue ;
	} 
	 
	printf("%d- %s\n",(i+1) , ptr[i]);
	 
 }
 flage =0 ;
 
 printf("\n");
printf("please choose your slot");
scanf("%d",&slots);
 
if( ptr[slots-1] != NULL  ){
	num =slots-1; 
	printf("Thank You for your choise \nYour slot is %s\n" ,ptr[slots-1]);
	ptr[slots-1] = NULL ;
   
}
 
else{

	printf("this slot is not avaliable");
	printf("please choose your slot");
scanf("%d",&slots);
}
 
 printf("\n");
 return num ;

 }
   
  int main(){
  
 int  age1 ;
 int name1 [100];
 int gend1[20];
 int  mode ;
 int pass = 1234 ;
 int admin_pass ;
 char try =3 ;
 char admin_cho;
 char back ;
 char edit_info ;
 char patient_id ;
 char flage =0 ;
  char p_id;
  char user_ch ;
  Node *ptr ;
 time =(char **)malloc(5*sizeof(char *));
 strings=(char **)malloc(5*sizeof(char *));
	
	for(int i =0 ; i<5; i++){
		
		strings[i] = (char *)malloc(60+1);
	}
	
	for(int i =0 ; i<5; i++){
		
		time[i] = (char *)malloc(60+1);
	}
	strings[0]="2 to 2:30 pm"; 
	strings[1]="2:30 to 3 pm";
	strings[2]="3 to 3:30 pm";
	strings[3]="4 to 4:30 pm";
	strings[4]="4:30 to 5 pm";
	
    time[0]="2 to 2:30 pm"; 
	time[1]="2:30 to 3 pm";
	time[2]="3 to 3:30 pm";
	time[3]="4 to 4:30 pm";
	time[4]="4:30 to 5 pm";
   
 printf("choose your mode \n1- if you are the admin \n2- if you are the user \n");
 scanf("%d",&mode);
 while(mode == 1){
	 printf("Admin mode \n");
	printf("please enter the system password\n ");
	scanf("%d",&admin_pass);
		 

    while(try >0 &&mode == 1){ 
		 

	 	
	 if(admin_pass == pass){
	  while(mode == 1){
		  
		  printf("1- to add patient \n2- to edit patient's information \n3- to Reserve a slot with the Doctor \n4- to cancel patient \n");
		   scanf("%d",&admin_cho);
		 while(admin_cho == 1 ){
			 printf("\n");
			 printf("Add Patient mode\n");
			  flage=0 ;
			printf("please Enter your name \n");
            scanf("%s",&name1);
			printf("please Enter your Gender \n");
            scanf("%s",&gend1);
			printf("please Enter your age ") ;
			scanf("%d",&age1); 
		   InsertAtFirst(age1,name1,gend1);
		   printf("Your ID: %d\n",i_d);
		   printf("3- to exit from this mode\n2- to stay in this mode \n");
		   scanf("%d",&back);
  
		   if(back == 3){
			   flage =1 ;
			    
			   break ;
		   }
		   else if(back == 2){
			   
			  admin_cho = 1 ; 
		   }
		     
		 }
		
		  if(flage){
			  flage=0;
			  printf("choose your mode \n1- if you are the admin \n2- if you are the user \n");
               scanf("%d",&mode);
			  continue ;
		  }
		  
		
		 while(admin_cho == 2 ){
			 printf("\n");
			 printf("Edit patient's information\n");
			 flage=0 ;
			printf("please enter patient's ID");
			scanf("%d",&patient_id);
			printf("1- to edit patient's age \n2- to edit patient's name \n3- to edit patient's gender\n0- to edit all patient's inforamtion enter 0 \n");
			scanf("%d",&edit_info);
			if(edit_info ==1){
                updatevalue(patient_id,1);
			   }         
			else if(edit_info==2  ){
				updatevalue(patient_id,2);
                         }
			else if(edit_info==3){
			 }
			else if(edit_info ==0){
			printf("please Enter new name \n");
            scanf("%s",&name1);
			printf("please Enter new Gender \n");
            scanf("%s",&gend1);
			printf("please Enter new age ") ;
			scanf("%d",&age1);
			}
           
		     printf("3- to exit from this mode \n2- to stay in this mode \n");
		   scanf("%d",&back);
		   if(back == 3){
			    flage=1 ;
			   break ;
		   }
		   else{
			  admin_cho = 2 ; 
		   }
		 }
 
           if(flage){
			    printf("choose your mode \n1- if you are the admin \n2- if you are the user \n");
               scanf("%d",&mode);
			   flage=0;
			  continue ;
		  }
		  while(admin_cho==3){
			  printf("\n");
			  printf(" Reserve a slot with the Doctor\n");
			time_index =Reserve_a_slot(strings);  
			updatevalue(i_d,4);
		   printf("3- to exit from this mode \n2- to stay in this mode \n");
		   
		   scanf("%d",&back);
		   if(back == 3){
			    flage=1 ;
			   break ;
		   } 
		   
		   else{
			  admin_cho = 3 ; 
		   }
		  }
		  
		   if(flage){
			    printf("choose your mode \n1- if you are the admin \n2- if you are the user \n");
         scanf("%d",&mode);
			   flage=0;
			  continue ;
		  }
		  
		 while(admin_cho==4){
			 printf("\n");
			 printf("Cancel Reservetion\n");
		    printf("please enter patient's ID");
			scanf("%d",&patient_id);
			DeleteValue(patient_id);
			 
			printf("this patient's order has been cancelled\n");
			printf("3- to exit from this mode\n2- to stay in this mode \n");
		   scanf("%d",&back);
		   if(back == 3){
			    flage=1 ;
			   break ;
		   } 
		   
		   else{
			   flage=0;
			  admin_cho = 4 ; 
		   }
		 }
		 
		 
	 if(flage){
			    printf("choose your mode \n1- if you are the admin \n2- if you are the user \n");
         scanf("%d",&mode);
			   flage=0;
			  continue ;
		  }
		
	 }}
	else{
	printf("wrong password \n try again")	;
	scanf("%d",&admin_pass);
		try--;
	 
 
	}
	
	 
	}
	 
	 
 }
 
  
 while( mode ==2){
printf("1- View patient record\n2- View today's reservation\n");
scanf("%d",&user_ch);	 
if(user_ch==1){
printf("View patient record mode\n");
printf("Please enter patient ID\n");
scanf("%d",&patient_id);	
ptr = Search(patient_id);	
				printf("\n");
			printf("ID  : %d\n",ptr->ID);
		    printf("age : %d\n",ptr->age);
			printf("Name : %s\n",ptr->name);
			printf("Gender : %s\n",ptr->gender);
	        printf("your slot is : %s\n", time[ptr->slot] );
printf("if want to Exit enter 1");
scanf("%d",&mode);			
	
}	 

else if(user_ch ==2){
	printf("View today's reservation mode\n");
	 printing = head ;
    int flag =1;
	int i =0 ;
	while(flag){
		if( printing->next == NULL){
			printf("\n");
			printf("ID  : %d\n",printing->ID);
		    printf("age : %d\n",printing->age);
			printf("Name : %s\n",printing->name);
			printf("Gender : %s\n",printing->gender);
	        printf("your slot is : %s\n", time[printing->slot] );
			flag =0 ;
		 
		}
		else{
			printf("\n");
			printf("ID  : %d\n",printing->ID);
		    printf("age : %d\n",printing->age);
			printf("Name : %s\n",printing->name);
			printf("Gender : %s\n",printing->gender);
	       printf("your slot is : %s\n",  time[printing->slot]);
			i++;
			printing = printing->next ;
		}
	}
	 
	printf("if want to Exit enter 1");
scanf("%d",&mode);
 }
 
 }
 
   }