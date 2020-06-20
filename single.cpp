#include <iostream>
#include<iomanip>
#include <fstream>
#include<windows.h>
using namespace std;
void add_front_single();
void add_middle_single_right(int location);
void add_middle_single_left(int location);
void add_middle_single_left(int location);
void add_end_single();
void delete_front_single();
void delete_middle_single(int myid);
void delete_end_single();
void update_datas();
void display_by_gpa();
void display_whole();
void search_datas(int myid);
void sort_datas();
void read();
void intro();
void list_datas();
int checkExist(int che);
long int text_animation2(char a[100])
{
    int i;
    double k;
    for (i=0; a[i]!='\0';++i)
    {
        for(k=0;k<10000000; ++k);
        cout<<a[i];
    }
    cout<<a[i];
}
struct student{
string name;
int id;
int age;
int year;
float GPA;
int data;
int roll;
student *next;
student *prev;
};
student *head=NULL,*tail=NULL;
int main()
{
        system("color a");
        char c;
        system("cls");
        intro();
        list_datas();

    return 0;
}
void list_datas(){

int n=1;
    do{
        cout<<endl<<endl<<endl;
       // system("color c");
        cout<<"\t\t\t    _______________________________________________________"<<endl;
		cout<<"\t\t\t||                        MAIN MENU                        ||"<<endl;
		cout<<"\t\t\t|| 1.  ADD_FRONT data in to the SINGLE_LINKED_LIST.        ||"<<endl;
		cout<<"\t\t\t|| 2.  ADD MIDDLE data in to the middle SINGLE_LINKED_LIST. ||"<<endl;
		//cout<<"\t\t\t|| 3.  ADD MIDDLE data in to the left SINGLE_LINKED_LIST.||"<<endl;
		cout<<"\t\t\t|| 4.  ADD END data in to the SINGLE_LINKED_LIST.          ||"<<endl;
		cout<<"\t\t\t|| 5.  DELETE data FROM the FRONT OF SINGLE_LINKED_LIST.   ||"<<endl;
		cout<<"\t\t\t|| 6.  DELETE data FROM the MIDDLE OF SINGLE_LINKED_LIST.  ||"<<endl;
		cout<<"\t\t\t|| 7.  DELETE data FROM the END OF SINGLE_LINKED_LIST.     ||"<<endl;
		cout<<"\t\t\t|| 8.  SEARCH DATAS BY THE ID NUMBER.                      ||"<<endl;
		cout<<"\t\t\t|| 9.  UPDATE DATAS BY THE ID NUMBER.                      ||"<<endl;
		cout<<"\t\t\t|| 10  SORT DATAS BY THE ID NUMBER.                        ||"<<endl;
		cout<<"\t\t\t|| 11. DISPLAY THE GPA GREATER THAN 3.0 .                  ||"<<endl;
		cout<<"\t\t\t|| 12. DISPALY AS A WHOLE.                                 ||"<<endl;
		cout<<"\t\t\t|| 13. READ FROM FILE                                      ||"<<endl;
		cout<<"\t\t\t|| 14. EXIT THE PROGRAM                                    ||"<<endl;
		cout<<"\t\t\t||_________________________________________________________||"<<endl;
		cout<<endl<<endl;
        cout<<"\tEnter your choice: ";
        cin>>n;
        if(n==1)
        add_front_single();
        else if(n==2){
         int location;
         cout<<"\t\t\tEnter the roll number position after which the element to be added: ";
         cin>>location;
         add_middle_single_right(location);
         break;

        }
        else if(n==3){
         int location;
         cout<<"\t\t\tEnter the roll number position before which the element to be added: ";
         cin>>location;
         add_middle_single_left(location);
         break;

        }
        else if(n==4)
        add_end_single();
        else if(n==5)
        delete_front_single();
        else if(n==6){
         int yourId;
         cout <<"\t\t\tPLEASE ENTER THE ID NUMBER YOU WANT TO DELETE"<<endl;
         cin>>yourId;
         delete_middle_single(yourId);
        }
        else if(n==7)
        delete_end_single();
        else if(n==8){
          int yourid;
          cout << "\t\t\tPLEASE ENTER THE ID YOU WANT TO SEARCH"<<endl;
          cin>>yourid;
          search_datas(yourid);
        }

        else if(n==9)
        update_datas();
        else if(n==10)
        sort_datas();
        else if(n==11)
        display_by_gpa();
        else if(n==12)
        display_whole();
        else if(n==13)
        read();
        else if(n==14){
          n=0;
           system("cls");
           system("color e");
              text_animation2("\t\t THIS SOFTWARE USEFUL FOR SAVING PAPER AND TIME.\n\n");
              text_animation2("\t\t THIS SOFTWARE CAN REGISTER AND STORE FULL STUDENT INFORMATION.\n\n");
              text_animation2("\t\t THIS SOFTWARE HAVE REGISTER, LIST, MODIFY/EDIT AND REMOVE STUDENT INFORMATION. \n\n");
              text_animation2("\t\t THIS SOFTWARE CAN BE USED IN COLLAGE, HIGHSCHOOL, UNIVERSITIES....\n\n\n\n\n\n");
              text_animation2("\t\t THANK YOU FOR USING THIS SOFTWARE.\n\n");
              // system("pause");
             cout << "\n\n";
             cout<<"\t   GROUP MEMBERS(DEVELOPERS)";
             cout << "\n\n";
             cout << "\t   NAME                               ID                 PHONE NUMBER \n\n";
             cout << "\t   1. BIRUK ABERE                 GUE/01182/11          +251974461688  \n\n";
             cout << "\t   2. BINIYAM YOSEF               GUE/01480/11          +251946230602   \n\n";
             cout << "\t   3. ABEL WONDMU                 GUE/01424/11          +251965311410    \n\n";
             cout << "\t   4. AMANUEL CHALACHEW           GUE/01479/11          +251941257770     \n\n";
              cout << "\n\n";
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED TO:   SEID YESUF\n";
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED DATE: 20/06/2012 ";

              cout << "\n\n";
        }

        else
        cout << "enter the appropriate number " << endl;

    }while(n!=0);
}
void intro()

{

//   recsize = sizeof(s);
 //HANDLE f = GetStdHandle(STD_OUTPUT_HANDLE);
   // SetConsoleTextAttribute(f, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        system("cls");//for display in new page

    cout << "\n\n\n";
     Sleep(300);
    cout << "\t\t * * *  **** *      ****  ***   ***   ****   *****  ***    ****  *****   **** " << endl;
     Sleep(300);
    cout << "\t\t * * * *     *     *     *   * * * * *         *   *   *   *     *    *  *     " << endl;
     Sleep(300);
    cout << "\t\t * * * ***** *     *     *   * * * * *****     *   *   *   ****  *  *    **** " << endl;
     Sleep(300);
    cout << "\t\t * * * *     *     *     *   * * * * *         *   *   *      *  *   *      * " << endl;
     Sleep(300);
    cout << "\t\t  ***   **** *****  ****  ***  * * *  ****     *    ***    ****  *     * ****  " << endl;
     Sleep(300);
    cout << "\n";
    cout << "\n\n\n";

         text_animation2("\t\t\t\t=============================================.\n\n");
         text_animation2("\t\t\t\tTHIS IS STUDENT REPORT CARD MANEGEMENT SYSTEM. \n\n");
         text_animation2("\t\t\t\t============================================= \n\n");





}

void add_front_single(){
student *TEMP=new student;
 cout<<endl<<endl;
 cout <<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
 cin>>TEMP->name;
 cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
 cin>>TEMP->id;
   if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
 cout <<"\t\t\tPLEASE ENTER YOUR AGE:"<<" ";
 cin>>TEMP->age;
 cout << "\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
 cin>>TEMP->roll;
 cout << "\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
 cin>>TEMP->year;
 cout << "\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
 cin>>TEMP->GPA;
 TEMP->next=NULL;

 if(head==NULL)
    head=TEMP;
 else{
     TEMP->next=head;
     head=TEMP;
     ///////////////////////
     ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
       myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
    myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";
 }
 list_datas();

}

void add_middle_single_right(int position){

student *TEMP=new student;
cout<<endl<<endl;
cout<<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
cin>>TEMP->name;
cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
cin>>TEMP->id;
if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
cout<<"\t\t\tPLEASE ENTER YOUR AGE:"<<" ";
cin>>TEMP->age;
cout <<"\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
cin>>TEMP->roll;
cout <<"\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
cin>>TEMP->year;
cout<<"\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
cin>>TEMP->GPA;
TEMP->next=NULL;
if(head==NULL)
    head=TEMP;
else{
    student *TEMP2=head;
    while(TEMP2->roll!=position){
        TEMP2=TEMP2->next;
    }
    TEMP->next=TEMP2->next;
    TEMP2->next=TEMP;
    ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
      myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
    myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";
    list_datas();
}
}
void add_middle_single_left(int position){
student *TEMP=new student;
cout<<endl<<endl;
cout<<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
cin>>TEMP->name;
cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
cin>>TEMP->id;
if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
cout<<"\t\t\tPLEASE ENTER YOUR AGE:"<<" ";
cin>>TEMP->age;
cout<<"\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
cin>>TEMP->roll;
cout<<"\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
cin>>TEMP->year;
cout<<"\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
cin>>TEMP->GPA;

TEMP->next=NULL;
if(head==NULL)
    head=TEMP;
else{
    student *TEMP2=head;
    student *TEMP3;
    while(TEMP2->roll!=position){
        TEMP3=TEMP2;
        TEMP2=TEMP2->next;
    }
    TEMP2->next=TEMP3->next;
    TEMP3->next=TEMP;
    ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
       myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			 myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
    myfile.close();

    cout<<"\n\n\t\t\tFile saved!\n";
    list_datas();
}

}
void add_end_single(){
 student *TEMP2;
 student *TEMP=new student;
 cout<<endl<<endl;
 cout<<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
 cin>>TEMP->name;
 cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
 cin>>TEMP->id;
 if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
 cout <<"\t\t\tPLEASE ENTER YOUR AGE:"<<" ";
 cin>>TEMP->age;
 cout <<"\t\t\tPLEASE ENTER YOUR ROLL NUMBER"<<" ";
 cin>>TEMP->roll;
 cout <<"\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
 cin>>TEMP->year;
 cout <<"\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
 cin>>TEMP->GPA;
 TEMP->next=NULL;
 if(head==NULL)
    head=TEMP;
 else{
     TEMP2=head;
    while(TEMP2->next!=NULL){
        TEMP2=TEMP2->next;
    }
    TEMP2->next=TEMP;
    ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
       myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
    myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";
 }
}
list_datas();
}

void delete_front_single(){
    student *TEMP;
    if(head==NULL)
    cout << "NO DATA INSIDE" << endl;
    else{
    TEMP=head;
    head=head->next;
    delete TEMP;
    cout<< "\t\t\tTHE DATA DELETED SUCCESSFULLY"<<endl;
    ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
       myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
    myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";
    }
}
list_datas();
}
void delete_middle_single(int myid){
    student *TEMP,*TEMP2;
    if(head==NULL)
    cout << "\t\t\tNO DATA INSIDE" << endl;
    if(head->id==myid){
    TEMP=head;
    head=head->next;
    delete TEMP;
    }
    else{
    TEMP=head;
    while(TEMP->id!=myid){
        TEMP2=TEMP;
        TEMP=TEMP->next;
    }
    TEMP2->next=TEMP->next;
    delete TEMP;
    cout<< "\t\t\tTHE DATA DELETED SUCCESSFULLY"<<endl;
    ofstream myfile ("students_Record.txt",ios::app);
     if (myfile.is_open())
        {
      myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
    myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";
}
list_datas();
}
void delete_end_single(){
    student *TEMP,*TEMP2;
    if(head==NULL)
    cout << "NO DATA INSIDE" << endl;

    else{
    TEMP=head;
    while(TEMP->next!=NULL){
        TEMP2=TEMP;
        TEMP=TEMP->next;

    }
    TEMP2->next=NULL;
    delete TEMP;
    cout << "\t\t\tTHE DATA IS DELETED SUCCESSFULLY"<<endl;
    ofstream myfile ("students_Record.txt",ios::app);
    if (myfile.is_open())
        {
      myfile << "ID \t\tName \t\t\t Age\t\t\t Roll \t\t\t Year \t\t\t GPA \n";
      struct student *p=head;
       int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
      myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";

    }
    list_datas();
}
void search_datas(int myid)
{
student *temp=head;
	while(temp!=NULL)
{
	if(temp->id==myid)
    {
        int n;
        //cout<<endl<<endl;
        cout<<"\t\t\ttA student with ID N0 "<<temp->id<<" is found"<<endl;
        cout<<"\t\t\tYou want to see this student information ?(1(YES)/0(NO) :"<<" ";
        cin>>n;
        if(n==1||'y')
        {
        cout<<"\n\t\t\tYOUR Name : "<<temp->name;
		cout<<"\n\t\t\tYOUR  age : "<<temp->age<<endl;
		cout<<"\n\t\t\tYOUR  age : "<<temp->roll<<endl;
		cout<<"\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\n\t\t\t================"<<endl;
        }
        else if(n==0||'n')
        {
            list_datas();
        }
        break;
    }
    else if(temp->id!=myid)
    {
		temp = temp->next;
    }
    else
    {
        cout<<"\t\t\tThe Student is not found"<<endl;
    }
}
  list_datas();
}
void update_datas(){
     string Sname;
     int SID;
     int Sage;
     int Sroll;
     int Syear;
     float SGPA;
    if (head == NULL)
       {
    	//system("cls");
        cout<<"\t\t\tList is empty"<<endl;
       }else
	   {
        cout<<endl<<endl;
		cout<<"\n\n\t\t\tEnter ID to modify Your Data:";
		cin>>SID;
		struct student *cur=head;
		if(cur->id==SID)
            cout<<"\t\t\tTHE ID FOUND"<<endl;
        else
            cout<<"\t\t\tRECORD NOT FOUND"<<endl;
		while(cur->id!=SID){
			cur=cur->next;
		}
		cout<<"\t\t\t================"<<endl;
		cout<<"\n\t\t\tOld Name : "<<cur->name<<endl;
		cout<<"\n\t\t\tOld age : "<<cur->age<<endl;
		cout<<"\n\t\t\tOld YEAR : "<<cur->year<<endl;
		cout<<"\n\t\t\tOld GPA : "<<cur->GPA<<endl;
		cout<<"\t\t\t================"<<endl;
		char mod;
		cout<<"\n\t\t\tWANT TO MODIFY YOUR DATA ..?? (y/n): ";
	     cin>>mod;
	     if(mod=='y'|| mod=='Y')
	     {
         cout<<"\n\t\t\tEnter new Name:";
		 cin>>Sname ;
		 cur->name=Sname;
		cout<<"\n\t\t\tEnter new age:";
		cin>>Sage;
		cur->age=Sage;
		cout<<"\n\t\t\tEnter new roll:";
		cin>>Sroll;
		cur->roll=Sroll;
		cout<<"\n\t\t\tEnter Your New Year:";
		cin>>Syear;
		cur->year=Syear;
		cout<<"\n\t\t\tEnter Your New GPA:";
		cin>>SGPA;
		cur->GPA=SGPA;
        ofstream myfile("students_Record.txt",ios::in);
        myfile << "ID \t\tName t\t\t Age \t\t Roll \t\t Year \t\t\t GPA \n";
        myfile<<cur->id<<"\t\t"<<cur->name<<"\t\t\t"<<cur->age<<"\t\t"<< cur->roll<<"\t\t"<<cur->year<<"\t\t\t"<<cur->GPA<<"\n";
        myfile.close();
		}
    cout<<"\n\n\t\t\tFile saved!\n";

 }
 list_datas();
 }

void display_whole(){
student *temp=head;
/*
cout << endl << setw(15) << "Name"  << setw(15) << "age"<< endl;
for(int i=0; i<-25; i++)
    cout << " ";
for(int i=0; i<=25; i++)
    cout << "=";*/
while(temp!=NULL){
//cout << endl << setw(15) << "Name" << " " << temp->name  << " " << setw(15) << "age"  << " " << temp->age<<" "<<setw(15)<<"year"<<temp->year<<" "<<setw(15)<<temp->GPA;
        cout<<"\n\n\n\t\t\tYOUR Name : "<<temp->name<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->age<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->roll<<endl;
		cout<<"\n\n\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\n\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\t\t\t================================="<<endl;
        temp=temp->next;
}
cout << endl;
list_datas();
}
void sort_datas(){
   system("cls");
    student *s;
//    student value = new student;
    student *temp= new student;
    if(head == NULL)
    {
        system("color 04");
        cout<<"The List is empty"<<endl;
        return;
    }
    temp=head;
    while(temp != NULL)
    {
        for( s=temp->next ; s!=NULL; s=s->next )
        {
            if( temp->id > s->id)
            {
                swap<char>(temp->name,s->name);
                swap<int>(temp->age,s->age);
                swap<int>(temp->id,s->id);
                swap<float>(temp->GPA,s->GPA);
                swap<int>(temp->year,s->year);
            }
        }
        temp = temp ->next ;
    }
    cout<<"\t\t\t\tSUCCESSFULLY SORTED!!!!!! ";
    cout<<"\n\t\t\t";
    system("pause");
    list_datas();
}
void display_by_gpa(){
student *temp=head;
while(temp!=NULL){
        if(temp->GPA>=3.00){
        cout<<"\n\n\n\t\t\tYOUR Name : "<<temp->name<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->age<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->roll<<endl;
		cout<<"\n\n\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\n\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\t\t\t======================"<<endl;

        }
       temp=temp->next;
}
cout << endl;
list_datas();
}
   void read(){
        string line;
        ifstream myfile("students_Record.txt");
        if (myfile.is_open())
         {
         while (getline(myfile,line) )
         {
          cout << line << '\n';
          }
            cout<<"\n\n";
            myfile.close();
         }
       else cout << "Unable to open file\n\n";
       list_datas();
    }
   int checkExist(int che)
{
 //  student *temp=new student;
   student *temp = NULL;
   student *curr= new student;
    curr = head;
    while(curr != NULL){
        if(curr->id == che){
            temp = curr;
            return true;
            }
        curr = curr->next;
    }
    return false;
    }


