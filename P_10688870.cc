// SCHOOL MANAGEMENT SYSTEM WITH C++.
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

// CREATING THE STRUCT FOR STAFF INFORMATION.

struct staffdata {
string staffnewcourse;
string lecturerqualification;
string stafffirstname;
string stafflastname;
string staffage;
string staffemployeenumber;
string staffdepartment;
string natureofstaff;
};


// CREATING THE STRUCT FOR STUDENT INFORMATION.
struct studentdata {

string studentfirstname;
string studentmiddlename;
string studentlastname;
string studentage;
string studentbloodgroup;
string studentprogramme;
string studentindexnumber;
string studenthallofresidence;

};

// CREATING THE CLASS TO HOLD ALL RELATED FUNCTIONS.
class STUDENTINFO {

public:

void staffinformation ( ) ;

void addstafffunction ( );

void editstafffunction ( );

void deletestafffunction (  );

void assignstudenttocoursesfunction (  );

void addnewstudentfunction ( );

void printacademicrecordfunction ( );

void studentinformation ( );

void graderecordfunction ( );

void mainpagefunction ( );

void editstudentfunction ( );

void deletestudentfunction (  ) ;

void manipulatecoursesfunction ( );

};


// CREATING THE FUNCTION TO ADD/EDIT/DELETE COURSES.
void STUDENTINFO :: manipulatecoursesfunction (  )  {
studentdata student;
STUDENTINFO STUDENT;
string response;
string newcourse;
string deletecourse;
string choice;
string certainty;
string course1;
string course2;
string course3;
string course4;
string course5;
string course6;
string number;
cout << " ****** WELCOME TO THE ADD / EDIT / DELETE COURSE PAGE. ******\n\n";
cout << " PLEASE ENTER THE STUDENT INDEX NUMBER TO CONTINUE. " <<endl;
cin >> student.studentindexnumber;
cout << " WELCOME STUDENT  " << student.studentindexnumber << " TO THE ADD / EDIT / DELETE COURSE PAGE " <<endl;
cout << " THIS PAGE ALLOWS YOU TO PERFORM THE FOLLOWING ACTIONS.\n\n";
cout << "1) ADD COURSES TO RECORD\n";
cout << "2) EDIT COURSE(S)\n";
cout << "3) DELETE COURSE(S) \n\n";
cout << "4) EXIT AND RETURN TO MAIN PAGE\n\n";
cout << " ENTER THE NUMBER CORRESPONDING TO THE ACTION YOU WISH TO TAKE AND CONTINUE\n\n";
cin >> number;
if (number == "1") { // FIRST IF
cout << " ***** ADD COURSES TO RECORD *****\n\n";
cout << " HERE ARE THE LIST OF COURSES AVAILABLE \n\n";
cout << " |COURSE CODE    |         |         COURSE TITLE                      |     |NO. OF CREDIT HOURS |  \n\n ";
cout << "|UGRC 150       |         | CRITICAL THINKING AND PRACTICAL REASONING |     |        3           | "<<endl;
cout << " |UGRC 110       |         |  ACADEMIC WRITING I                       |     |        3           | "<<endl;
cout << " |MATH 121       |         | ALGEBRA AND TRIGONOMETRY                  |     |        3           | "<<endl;
cout << " |STAT 111       |         | INTRODUCTION TO STATISTICS.               |     |        3           | "<<endl;
cout << " |CSCD 101       |         | INTRODUCTION TO COMPUTER SCIENCE I        |     |        3           | "<<endl;
cout << " |UGRC 131-136   |         | UNDERSTANDING HUMAN SOCIETY               |     |        2           | "<<endl;
cout << " |CSCD 201       |         | INFORMATION SYSTEMS                       |     |        3           | "<< endl;
cout << " |MATH 223       |         | CALCULUS II                               |     |        3           | "<<endl;
cout << " |CSCD 205       |         | PROGRAMMING I (WITH C++)                  |     |        3           | "<< endl;
cout << " |CSCD 211       |         | COMPUTER ORGANIZATON AND ARCHITECTURE     |     |        3           | "<<endl;
cout << " |CSCD 207       |         | NUMERICAL METHODDS                        |     |        3           | "<<endl;
cout << " |CHEM 111       |         | GENERAL CHEMISTRY                         |     |        2           | "<<endl;
cout << " |PHYS 101       |         | PRACTICAL PHYSICS I                       |     |        3           | " <<endl;
cout << " |PHYS 143       |         | MECHANICS AND THERMAL PHYSICS             |     |        1           | "<<endl;
cout << " |MATH 101       |         | GENERAL MATHEMATICS                       |     |        3           | "<<endl;
cout << " |BCMB 201       |         | STRUCTURE AND FUNCTIONS OF BIOMOLECULES   |     |        3           | "<<endl;
cout << " |BCMB 203       |         | PRINCIPLES OF BIOCHEMICAL TECHNIQUES      |     |        3           | "<<endl;
cout << " |CHEM 223       |         | ORGANIC CHEMISTRY I                       |     |        3           | " << endl;
cout << " |CSCD 301       |         | OBJECT ORIENTED ANALYSIS AND DESIGN       |     |        3           | "<<endl;
cout << " |CSCD 313       |         | DATABASE MANAGEMENT SYSTEMS               |     |        3           | "<<endl;
cout << " |CSCD 315       |         | OPERATING SYSTEMS                         |     |        3           | "<<endl;
cout << " |FPEN 301       |         | HEAT TRANSFER                             |     |        3           | \n\n";
cout << "ENTER THE COURSES YOU WISH TO ADD." <<endl;
cout << "* YOU CAN ONLY ADD A MAXIMUM OF SIX COURSES " <<endl;
cout << "* WHERE YOU WISH TO SPACE, PLEASE USE THE UNDERSCORE CHARACTER _" <<endl;
cin >>course1;
cin >>course2;
cin>>course3;
cin>>course4;
cin>>course5;
cin>>course6;

cout << " HERE ARE THE LIST OF ALL THE COURSES YOU HAVE ENTERED\n\n";
cout << course1 << endl;
cout << course2 << endl;
cout << course3 << endl;
cout << course4 << endl;
cout << course5 << endl;
cout <<	course6 << endl;
cout << " PRESS Y TO CONFIRM THEM AND ADD THEM SUCCESSFULLY \n";
cout << " PRESS X TO BE RETURNED TO THE MAIN PAGE IF YOU WISH TO MAKE CHANGES TO COURSES OR EXIT PAGE "<<endl;
cin >> response;
if ( response == "y" || response == "Y") {
cout << " YOU HAVE CONFIRMED THAT THE COURSES ENTERED ARE ALL CORRECT."<<endl;
cout << " ENTERED COURSES HAVE BEEN ADDED SUCCESSFULLY AND SAVED TO YOUR RECORD !!"<<endl;
cout << "YOU WILL NOW BE RETURNED TO THE MAIN PAGE \n\n";
STUDENT.mainpagefunction ( );
}

else if (response == "x" || response == "X")  {
cout << " ADD COURSES FAILED !!\n\n";
cout << " YOU WILL BE REDIRECTED TO THE MAIN PAGE\n\n";
STUDENT.mainpagefunction ( );

}


else {
cout << " INVALID ENTRY, ADD COURSES FAILED !! \n\n\n";
STUDENT.mainpagefunction ( );
}


} // FIRST IF.


else if (number == "2")  {
cout << " ****** WELCOME TO THE EDIT COURSE PLATFORM. ******\n\n\n";
cout << " ENTER STUDENT INDEX NUMBER TO CONTINUE\n";
cin >> student.studentindexnumber;
cout << " HERE ARE THE COURSES ADDED BY "<<student.studentindexnumber << endl;
cout << "1) MATH 223: CALCULUS II."<<endl;
cout << "2) CSCD 205: PROGRAMMING WITH C++."<<endl;
cout << "3) CSCD 207: NUMERICAL METHODS."<<endl;
cout << "4) CSCD 201: INFORMATION SYSTEMS."<<endl;
cout << "5) CSCD 211: COMPUTER ARCHITECTURE.\n\n";
cout << "ENTER THE OPTION NUMBER OF THE COURSE YOU WISH TO EDIT TO CONTINUE\n\n";
cin >> choice;
if (choice == "1") {
cout << " YOU HAVE CHOSEN TO EDIT MATH 223: CALCULUS II."<<endl;
cout << "ENTER THE NEW COURSE YOU WISH TO REPLACE MATH 223: CALCULUS II WITH."<<endl;
cout << "* USE UNDERSCORE CHACACTER _ FOR SPACING."<<endl;
cin>>newcourse;
cout << "EDIT SUCCESSFUL!!, MATH 223: CALCULUS II HAS BEEN CHANGED TO " <<newcourse << endl;
STUDENT.mainpagefunction( );
}

else if (choice == "2") {
cout << " YOU HAVE CHOSEN TO EDIT CSCD 205: PROGRAMMING WITH C++. "<<endl;
cout << "ENTER THE NEW COURSE YOU WISH TO REPLACE CSCD 205: PROGRAMMING WITH C++ WITH."<<endl;
cout << "* USE UNDERSCORE CHACACTER _ FOR SPACING."<<endl;
cin>>newcourse;
cout << "EDIT SUCCESSFUL!!, CSCD 205: PROGRAMMING WITH C++ HAS BEEN CHANGED TO " <<newcourse << endl;
STUDENT.mainpagefunction( );
}


else if (choice == "3") {
cout << " YOU HAVE CHOSEN TO EDIT CSCD 207: NUMERICAL METHODS. "<<endl;
cout << "ENTER THE NEW COURSE YOU WISH TO REPLACE CSCD 207: NUMERICAL METHODS WITH."<<endl;
cout << "* USE UNDERSCORE CHACACTER _ FOR SPACING."<<endl;
cin>>newcourse;
cout << "EDIT SUCCESSFUL!!, CSCD 207: NUMERICAL METHODS HAS BEEN CHANGED TO " <<newcourse << endl;
STUDENT.mainpagefunction( );
}

else if (choice == "4") {
cout << " YOU HAVE CHOSEN TO EDIT CSCD 201: INFORMATION SYSTEMS. "<<endl;
cout << "ENTER THE NEW COURSE YOU WISH TO REPLACE CSCD 201: INFORMATION SYSTEMS WITH."<<endl;
cout << "* USE UNDERSCORE CHACACTER _ FOR SPACING."<<endl;
cin>>newcourse;
cout << "EDIT SUCCESSFUL!!, CSCD 201: INFORMATION SYSTEMS HAS BEEN CHANGED TO " <<newcourse << endl;
STUDENT.mainpagefunction( );
}

else if (choice == "5") {
cout << " YOU HAVE CHOSEN TO EDIT CSCD 211: COMPUTER ARCHITECTURE. "<<endl;
cout << "ENTER THE NEW COURSE YOU WISH TO REPLACE CSCD 211: COMPUTER ARCHITECTURE WITH."<<endl;
cout << "* USE UNDERSCORE CHACACTER _ FOR SPACING."<<endl;
cin>>newcourse;
cout << "EDIT SUCCESSFUL!!, CSCD 211: COMPUTER ARCHITECTURE HAS BEEN CHANGED TO " <<newcourse << endl;
STUDENT.mainpagefunction( );
}

else {
cout << "INVALID ENTRY, ENTER CORRECT OPTION NUMBER TO PROCEED."<<endl;
STUDENT.mainpagefunction( );
}

} // SECOND IF.


else if (number == "3") { // 3rd if.
cout << "****** WELCOME TO THE DELETE COURSES PLATFORM ******" <<endl;
cout << "ENTER THE STUDENT INDEX NUMBER TO CONTINUE.\n";
cin >> student.studentindexnumber;
cout << " THESE ARE THE COURSES REGISTERED FOR BY STUDENT  "<<student.studentindexnumber <<endl;
cout << "1) MATH 223: CALCULUS II."<<endl;
cout << "2) CSCD 205: PROGRAMMING WITH C++."<<endl;
cout << "3) CSCD 207: NUMERICAL METHODS."<<endl;
cout << "4) CSCD 201: INFORMATION SYSTEMS."<<endl;
cout << "5) CSCD 211: COMPUTER ARCHITECTURE."<<endl;
cout << "ENTER THE OPTION NUMBER OF THE COURDE YOU WISH TO DELETE TO CONTINUE."<<endl;
cin >> deletecourse;
if ( deletecourse == "1") {
cout << "ARE YOU SURE YOU WANT TO DELETE MATH 223: CALCULUS II ?" <<endl;
cout << "ENTER Y TO CONFIRM AND DELETE COURSE OR ENTER N TO CANCEL AND EXIT PAGE."<<endl;
cin >> certainty;
if ( certainty == "y" || certainty == "Y") {
cout << "MATH 223: CALCULUS II HAS BEEN SUCCESSFULLY DELETED FROM YOUR RECORDS!" <<endl;
STUDENT.mainpagefunction( );
}


else  {
cout << "DELETE FAILED!!" <<endl;
STUDENT.mainpagefunction( );
}


}

// if delete ==2.
else if ( deletecourse == "2") {
cout << "ARE YOU SURE YOU WANT TO DELETE CSCD 205: PROGRAMMING WITH C++ ?" <<endl;
cout << "ENTER Y TO CONFIRM AND DELETE COURSE OR ENTER N TO CANCEL AND EXIT PAGE."<<endl;
cin >> certainty;
if ( certainty == "y" || certainty == "Y") {
cout << "CSCD 205: PROGRAMMING WITH C++ HAS BEEN SUCCESSFULLY DELETED FROM YOUR RECORDS!" <<endl;
STUDENT.mainpagefunction( );
}


else  {
cout << "DELETE FAILED!!" <<endl;
STUDENT.mainpagefunction( );
}


}

//
else if ( deletecourse == "3") {
cout << "ARE YOU SURE YOU WANT TO DELETE CSCD 207: NUMERICAL METHODS ?" <<endl;
cout << "ENTER Y TO CONFIRM AND DELETE COURSE OR ENTER N TO CANCEL AND EXIT PAGE."<<endl;
cin >> certainty;
if ( certainty == "y" || certainty == "Y") {
cout << "CSCD 207: NUMERICAL METHODS HAS BEEN SUCCESSFULLY DELETED FROM YOUR RECORDS!" <<endl;
STUDENT.mainpagefunction( );
}


else  {
cout << "DELETE FAILED!!" <<endl;
STUDENT.mainpagefunction( );
}


}

//
else if ( deletecourse == "4") {
cout << "ARE YOU SURE YOU WANT TO DELETE CSCD 201: INFORMATION SYSTEMS ?" <<endl;
cout << "ENTER Y TO CONFIRM AND DELETE COURSE OR ENTER N TO CANCEL AND EXIT PAGE."<<endl;
cin >> certainty;
if ( certainty == "y" || certainty == "Y") {
cout << " CSCD 201: INFORMATION SYSTEMS HAS BEEN SUCCESSFULLY DELETED FROM YOUR RECORDS!" <<endl;
STUDENT.mainpagefunction( );
}


else  {
cout << "DELETE FAILED!!" <<endl;
STUDENT.mainpagefunction( );
}


}


else if ( deletecourse == "5") {
cout << "ARE YOU SURE YOU WANT TO DELETE CSCD 211: COMPUTER ARCHITECTURE ?" <<endl;
cout << "ENTER Y TO CONFIRM AND DELETE COURSE OR ENTER N TO CANCEL AND EXIT PAGE."<<endl;
cin >> certainty;
if ( certainty == "y" || certainty == "Y") {
cout << " CSCD 211: COMPUTER ARCHITECTURE HAS BEEN SUCCESSFULLY DELETED FROM YOUR RECORDS!" <<endl;
STUDENT.mainpagefunction( );
}


else  {
cout << "DELETE FAILED!!" <<endl;
STUDENT.mainpagefunction( );
}


}


else {
cout << "INVALID OPTION NUMBER ENTERED "<<endl;
STUDENT.mainpagefunction();
}



} // 3rd if.



else if (number == "4") {
cout << " YOU HAVE CHOSEN TO EXIT PAGE.\n\n\n";
STUDENT.mainpagefunction( );

}


else {
cout << "INVALID OPTION NUMBER ENTERED. PLEASE RE-ENTER A VALID OPTION NUMBER TO CONTINUE\n\n";
manipulatecoursesfunction (  ) ;
}


} // FOR FUNCTION.


// CREATING THE FUNCTION TO EDIT STAFF.
void STUDENTINFO :: editstafffunction (  )   {
STUDENTINFO STUDENT;
staffdata student;
string hodnewdepartment;
string change;
string select;
string action;
cout << "***** WELCOME TO THE EDIT STAFF RECORD PAGE *****\n\n\n";
cout << "1) EDIT LECTURER\n";
cout << "2) EDIT HEAD OF DEPARTMENT\n";
cout << "PLEASE ENTER THE NUMBER CORRESPONDING TO THE PARTICULAR STAFF MEMBER YOU WISH TO EDIT\n";
cin >> select;
if (select == "1") {
cout << "***** EDIT LECTURER ***** \n\n\n";
cout << " ENTER THE LECTURER EMPLOYEE NUMBER\n";
cin >> student.staffemployeenumber;
cout << " YOU HAVE CHOSEN TO EDIT LECTURER:" << student.staffemployeenumber << endl;
cout << "THE EDIT LECTURER PLATFORM ALLOWS YOU TO PERFORM THE FOLLOWING OPERATIONS ON THE LECTURER:\n\n";
cout << "1) EDIT LECTURER DEPARTMENT.\n";
cout << "2) EDIT LECTURER QUALIFICATION eg. Dr, Prof, etc.\n";
cout << "3) EDIT COURSE TAUGHT BY LECTURER.\n\n";
cout << " ENTER THE NUMBER CORRESPONDING TO THE CHOICE OF ACTION YOU WISH TO TAKE.\n";
cin >> action;

if (action == "1") {
cout << "YOU HAVE CHOSEN TO EDIT THE DEPARTMENT OF LECTURER "<< student.staffemployeenumber <<endl;
cout << " THE CURRENT DEPARTMENT OF LECTURER "<< student.staffemployeenumber << " IS THE DEPARTMENT OF COMPUTER SCIENCE\n\n";
cout << " ENTER THE NEW DEPARTMENT OF LECTURER"<<student.staffemployeenumber << " TO EDIT THE DEPARTMENT"<<endl;
cout << "* WHERE SPACING IS REQUIRED, PLEASE USE THE UNDERSCORE CHARACTER _.\n\n";
cin >> student.staffdepartment;
cout << " THE NEWLY ENTERED DEPARTMENT OF LECTURER " << student.staffemployeenumber << " WILL OVERRIDE THE PREVIOUS DEPARTMENT"<<endl;
cout << " ENTER Y TO SAVE THE NEW DEPARTMENT AND CONTINUE.\n";
cout << " ENTER N IF YOU DO NOT WISH TO SAVE THE CHANGES.\n";
cin >> change;
if (change == "y" || change == "Y") {
cout << " EDIT SUCCESSFUL!!" <<endl;
cout << "DEPARTMENT OF LECTURER " << student.staffemployeenumber << " HAS BEEN CHANGED TO " <<student.staffdepartment <<endl;
cout << " YOU WILL NOW BE RETURNED TO THE MAIN PAGE."<<endl;
STUDENT.mainpagefunction();
}

else if (change == "n" || change == "N") {
cout << "EDIT FAILED !" << endl;
cout << " YOU WILL BE RETURNED TO MAIN PAGE "<<endl;
STUDENT.mainpagefunction();

} // END OF IF.

}


else if (action == "2") {
cout << "***** EDIT LECTURER QUALIFICATION *****\n\n\n";
cout << " QUALIFICATION OF LECTURER "<< student.staffemployeenumber << " IS CURRENTLY Dr."<<endl;
cout << " ENTER THE NEW QUALIFICATION OF THE LECTURER"<<endl;
cout << "*WHERE SPACING IS REQUIRED, USE THE UNDERSCORE CHARACTER _\n\n";
cin >> student.lecturerqualification;
cout << " YOU HAVE CHOSEN TO EDIT THE QUALIFICATION OF LECTURER "<< student.staffemployeenumber << endl;
cout << "THE NEW QUALIFICATION YOU HAVE ENTERED WILL BE SAVED AND THE PREVIOUS QUALIFICATION DELETED FROM THE DATABASE "<<endl;
cout << " ENTER Y TO CONFIRM AND SAVE CHANGES TO LECTURER "<< student.staffemployeenumber << endl;
cin >> change;
if (change == "y" || change == "Y") {
cout << " EDIT OF LECTURER QUALIFICATION SUCCESSFUL! \n\n";
cout << " THE QUALIFICATION OF LECTURER " << student.staffemployeenumber << " HAS BEEN CHANGED FROM Dr. " << "TO " << student.lecturerqualification;
cout << " YOU WILL NOW BE RETURNED TO THE MAIN PAGE."<<endl;
STUDENT.mainpagefunction();
}

else if (change == "n" || change == "N") {
cout << "EDIT FAILED !" << endl;
cout << " YOU WILL BE RETURNED TO MAIN PAGE "<<endl;
STUDENT.mainpagefunction();

}


} // END OF IF.



else if (action == "3") {
cout << "***** EDIT COURSE TAUGHT BY LECTURER *****\n\n\n";
cout << "YOU HAVE CHOSEN TO EDIT THE COURSE TAUGHT BY LECTURER " << student.staffemployeenumber << endl;
cout << "LECTURER "<< student.staffemployeenumber << " IS CURRENTLY TEACHING CSCD 207: NUMERICAL METHODS"<<endl;
cout << "ENTER THE NEW COURSE OF LECTURER " << student.staffemployeenumber << endl;
cout << "*WHERE SPACING IS REQUIRED, USE THE UNDERSCORE CHARACTER _\n\n";
cin >> student.staffnewcourse;
cout << "THE NEW COURSE ENTERED FOR LECTURER "<< student.staffemployeenumber << " WILL REPLACE THE PREVIOUS COURSE TAUGHT BY THE LECTURER IN THE DATABASE" << endl;
cout << " ENTER Y TO CONFIRM AND SAVE CHANGES TO LECTURER "<< student.staffemployeenumber << endl;
cin >> change;
if (change == "y" || change == "Y") {
cout << " EDIT OF LECTURER COURSE SUCCESSFUL! \n\n";
cout << " THE COURSE OF LECTURER " << student.staffemployeenumber << " HAS BEEN CHANGED FROM CSCD 207: NUMERICAL METHODS " << "TO " << student.staffnewcourse;
cout << " YOU WILL NOW BE RETURNED TO THE MAIN PAGE."<<endl;

STUDENT.mainpagefunction();
}

else if (change == "n" || change == "N") {
cout << "EDIT FAILED !" << endl;
cout << " YOU WILL BE RETURNED TO MAIN PAGE. "<<endl;
STUDENT.mainpagefunction();

}


} // CLOSING THE BRACE FOR ACTION


}  // CLOSING BRACE FOR SELECT.

else if ( select == "2")  {
cout << " ******* WELCOME TO THE EDIT HEAD OF DEPARTMENT PAGE ****** \n\n\n";
cout << " ENTER THE STAFF NUMBER OF THE HEAD OF DEPARTMENT."<<endl;
cin >> student.staffemployeenumber;
cout << " THE HEAD OF DEPARTMENT PAGE ALLOWS YOU TO EDIT THE FOLLOWING DETAIL OF THE HEAD OF DEPARTMENT\n\n";
cout << "1) DEPARTMENT OF H.O.D\n";
cout << " *ALL HEADS OF DEPARTMENTS HAVE REACHED THE HIGHEST QUALIFICATION.\n\n";
cout << "ENTER THE CHOICE NUMBER TO EDIT THE DEPARTMENT OF THE H.O.D\n\n";
cin >> action;
if (action == "1")  {

cout << " YOU HAVE CHOSEN TO EDIT THE DEPARTMENT OF H.O.D " << student.staffemployeenumber;
cout << " CURRENT DEPARTMENT OF H.O.D " << student.staffemployeenumber << " IS THE COMPUTER SCCIENCE DEPARTMENT" <<endl;
cout << " ENTER THE NEW DEPARTMENT OF THE H.O.D\n\n";
cout << "*WHERE SPACING IS REQUIRED, USE THE UNDERSCORE CHARACTER _\n\n";
cin >> hodnewdepartment;
cout << " THE DEPARTMENT OF H.O.D "<< student.staffemployeenumber << " WILL BE CHANGED TO THE NEWLY ENTERED DEPARTMENT\n\n";
cout << " ENTER Y TO CONFIRM AND SAVE CHANGES TO HEAD OF DEPARTMENT "<< student.staffemployeenumber << endl;
cin >> change;
if (change == "y" || change == "Y") {
cout << " EDIT OF H.O.D DEPARTMENT SUCCESSFUL !\n\n";
cout << " THE DEPARTMENT OF H.O.D " << student.staffemployeenumber << " HAS BEEN CHANGED FROM THE COMPUTER SCIENCE DEPARTMENT" << "TO " <<hodnewdepartment;

cout << " YOU WILL NOW BE RETURNED TO THE MAIN PAGE."<<endl;

STUDENT.mainpagefunction();
}

else if (change == "n" || change == "N") {
cout << "EDIT FAILED !" << endl;
cout << " YOU WILL BE RETURNED TO MAIN PAGE "<<endl;
STUDENT.mainpagefunction();

}


}

// else for action
else {
cout << " INVALID ENTRY, ENTER 1 TO PROCEED\n";
cout << " YOU WILL BE RETURNED TO THE MAIN PAGE TO TRY AGAIN " << endl;
STUDENT.mainpagefunction ( );
}

}	// FOR SELECT


else {
cout << " INVALID ENTRY, ENTER OPTION NUMBERS 1 0R 2 TO PROCEED." << endl;
cout << " YOU WILL BE RETURNED TO THE MAIN PAGE TO TRY AGAIN. " << endl;
STUDENT.mainpagefunction ( );
}


}  // FOR FUNCTION.



// CREATING THE FUNCTION TO ADD NEW STAFF.
void STUDENTINFO :: addstafffunction (  )  {
STUDENTINFO STUDENT;
string specificposition;
string answer;
staffdata staff;
string response;
string position;
cout << "WELCOME TO THE ADD NEW STAFF PAGE." <<endl;
cout << "PLEASE SELECT THE POSITION OF THE STAFF"<<endl;
cout << "1) LECTURER."<<endl;
cout << "2) HEAD OF DEPARTMENT."<<endl;
cout << "3) OTHER."<<endl;
cout << "PLEASE ENTER THE NUMBER CORRESPONDING TO THE POSITION OF STAFF."<<endl;
cin >> position;

if (position == "1") {
cout << "****** WELCOME TO THE ADD NEW LECTURER PAGE ******\n\n" ;
cout << "ENTER THE FIRST NAME OF LECTURER"<<endl;
cin >> staff.stafffirstname;
cout << "ENTER LAST NAME OF LECTURER"<<endl;
cin >> staff.stafflastname;
cout << "ENTER THE AGE OF THE LECTURER"<<endl;
cin >> staff.staffage;
cout << "ENTER THE LECTURER'S STAFF EMPLOYEE NUMBER"<<endl;
cin >> staff.staffemployeenumber;
cout << " ENTER THE DEPARTMENT OF THE LECTURER" << endl;
cin >> staff.staffdepartment;

cout <<"HERE ARE THE DETAILS ENTERED FOR THE LECTURER YOU WISH TO ADD\n\n";
cout << "LECTURER FIRST NAME: " << staff.stafffirstname <<endl;
cout << "LECTURER LAST NAME:  "<< staff.stafflastname << endl;
cout << "AGE OF LECTURER: " << staff.staffage <<endl;
cout << "LECTURER EMPLOYEE NUMBER: "<< staff.staffemployeenumber <<endl;
cout << "DEPARTMENT OF LECTURER: "<< staff.staffdepartment <<endl;
cout << "PLEASE CHECK THROUGH THE ABOVE DETAILS FOR CERTAINTY."<<endl;
cout << "ENTER Y IF THE ABOVE DETAILS ARE CORRECT TO ADD THE LECTURER AND EXIT PAGE."<<endl;
cout << "ENTER NO IF THE ABOVE DETAILS CONTAIN ERRORS SO THAT YOU CAN CORRECT THEM."<<endl;
cin >> response;

if (response == "Y" || response == "y") {
cout << "YOU HAVE CONFIRMED THAT ALL ENTERED DETAILS OF THE LECTURER ARE CORRECT."<<endl;
cout << "THE LECTURER HAS BEEN SUCCESSFULLY ADDED!!"<<endl;
cout<< "IF YOU WISH TO ADD ANOTHER LECTURER, ENTER N ELSE ENTER X TO EXIT PAGE." <<endl;
cin >> answer;

if (answer == "N" || answer == "n")  {
addstafffunction ( );
}

else if ( answer == "X" || answer == "x") {

STUDENT.mainpagefunction ( );
}


}

else if (response == "NO" || response == "no") {
cout << " IT SEEMS THERE ARE ERRORS WITH THE ENTERED DETAILS, YOU WILL BE TAKEN BACK TO CORRECT THEM"<<endl;
addstafffunction ( );
}


}	// END OF IF.


else if ( position == "2") {
cout << "****** WELCOME TO THE ADD NEW HEAD OF DEPARTMENT PLATFORM ******\n\n\n";
cout << "ENTER THE FIRST NAME OF HEAD OF DEPARTMENT"<<endl;
cin >> staff.stafffirstname;
cout << "ENTER LAST NAME OF THE HEAD OF DEPARTMENT"<<endl;
cin >> staff.stafflastname;
cout << "ENTER THE AGE OF THE HEAD OF DEPARTMENT"<<endl;
cin >> staff.staffage;
cout << "ENTER THE HEAD OF DEPARTMENT'S STAFF EMPLOYEE NUMBER"<<endl;
cin >> staff.staffemployeenumber;
cout << " ENTER THE DEPARTMENT " << endl;
cin >> staff.staffdepartment;
cout <<"HERE ARE THE DETAILS ENTERED FOR THE HEAD OF DEPARTMENT YOU WISH TO ADD\n\n";
cout << "HEAD OF DEPARTMENT FIRST NAME: " << staff.stafffirstname <<endl;
cout << "HEAD OF DEPARTMENT LAST NAME:  "<< staff.stafflastname << endl;
cout << "AGE OF HEAD OF DEPARTMENT: " << staff.staffage <<endl;
cout << " HEAD OF DEPARTMENT EMPLOYEE NUMBER: "<< staff.staffemployeenumber <<endl;
cout << "DEPARTMENT : "<< staff.staffdepartment <<endl;
cout << "PLEASE CHECK THROUGH THE ABOVE DETAILS FOR CERTAINTY"<<endl;
cout << "ENTER Y IF THE ABOVE DETAILS ARE CORRECT TO ADD THE LECTURER AND EXIT PAGE"<<endl;
cout << "ENTER NO IF THE ABOVE DETAILS CONTAIN ERRORS SO THAT YOU CAN CORRECT THEM"<<endl;
cin >> response;
if (response == "Y" || response == "y") {
cout << "YOU HAVE CONFIRMED THAT ALL ENTERED DETAILS OF THE HEAD OF DEPARTMENT ARE CORRECT"<<endl;
cout << "THE HEAD OF DEPARTMENT HAS BEEN SUCCESSFULLY ADDED!!"<<endl;
cout<< "IF YOU WISH TO ADD ANOTHER LECTURER, ENTER N ELSE ENTER X TO EXIT PAGE" <<endl;
cin >> answer;

if (answer == "N" || answer == "n")  {
addstafffunction ( );
}

else if ( answer == "X" || answer == "x") {

STUDENT.mainpagefunction ( );
}


}

else if (response == "NO" || response == "no") {
cout << " IT SEEMS THERE ARE ERRORS WITH THE ENTERED DETAILS, YOU WILL BE TAKEN BACK TO CORRECT THEM"<<endl;
addstafffunction ( );
}


}	// END OF ELSE IF.


else if (position == "3") {
cout << " SPECIFY THE POSITION OF THE STAFF." <<endl;
cin >> specificposition;
cout << "ENTER THE FIRST NAME OF STAFF."<<endl;
cin >> staff.stafffirstname;
cout << "ENTER LAST NAME OF STAFF."<<endl;
cin >> staff.stafflastname;
cout << "ENTER THE AGE OF THE STAFF."<<endl;
cin >> staff.staffage;
cout << "ENTER THE STAFF EMPLOYEE NUMBER."<<endl;
cin >> staff.staffemployeenumber;
cout <<"HERE ARE THE DETAILS ENTERED FOR THE LECTURER YOU WISH TO ADD\n\n";
cout << "STAFF FIRST NAME: " << staff.stafffirstname <<endl;
cout << "STAFF LAST NAME:  "<< staff.stafflastname << endl;
cout << "AGE OF STAFF: " << staff.staffage <<endl;
cout << "STAFF EMPLOYEE NUMBER: "<< staff.staffemployeenumber <<endl;
cout << "PLEASE CHECK THROUGH THE ABOVE DETAILS FOR CERTAINTY."<<endl;
cout << "ENTER Y IF THE ABOVE DETAILS ARE CORRECT TO ADD THE LECTURER AND EXIT PAGE."<<endl;
cout << "ENTER NO IF THE ABOVE DETAILS CONTAIN ERRORS SO THAT YOU CAN CORRECT THEM."<<endl;
cin >> response;

if (response == "Y" || response == "y") {
cout << "YOU HAVE CONFIRMED THAT ALL ENTERED DETAILS OF THE STAFF ARE CORRECT"<<endl;
cout << "THE STAFF HAS BEEN SUCCESSFULLY ADDED!!"<<endl;
cout<< "IF YOU WISH TO ADD ANOTHER STAFF, ENTER N ELSE ENTER X TO EXIT PAGE" <<endl;
cin >> answer;

if (answer == "N" || answer == "n")  {
addstafffunction ( );
}

else if ( answer == "X" || answer == "x") {

STUDENT.mainpagefunction ( );
}


}

else if (response == "NO" || response == "no") {
cout << " IT SEEMS THERE ARE ERRORS WITH THE ENTERED DETAILS, YOU WILL BE TAKEN BACK TO CORRECT THEM."<<endl;
addstafffunction ( );
}


}

else  {
cout << " INVALID CHOICE NUMBER ENTERED !!"<<endl;
STUDENT.mainpagefunction();
}


}


// CREATING THE FUNCTION TO DELETE STAFF.
void STUDENTINFO :: deletestafffunction (  )  {
staffdata staff;
STUDENTINFO STUDENT;
string action;
cout << " ****** DELETE STAFF PAGE ******\n\n\n";
cout << " ENTER THE STAFF EMPLOYEE NUMBER OF THE STAFF MEMBER TO CONTINUE.\n";
cin >> staff.staffemployeenumber;
cout << "SPECIFY THE STAFF POSITION eg LECTURER, HEAD OF DEPARTMENT, etc."<<endl;
cin >> staff.natureofstaff;
cout << " YOU HAVE CHOSEN TO DELETE STAFF MEMBER  "<< staff.staffemployeenumber
<< "  WHO IS A / OR AN  " << staff.natureofstaff <<endl;
cout << "ARE YOU SURE YOU WANT TO DELETE STAFF MEMBER "<<staff.staffemployeenumber << " FROM THE DATABASE?" <<endl;
cout << " ENTER Y TO CONFIRM AND DELETE THE STAFF OR X TO CANCEL ACTION AND RETURN TO MAIN PAGE"<<endl;
cin >> action;
if (action == "Y" || action =="y") {
cout << "STAFF SUCCESSFULLY DELETED !!\n\n";
cout << "YOU WILL NOW BE RETURNED TO MAIN PAGE\n\n";
STUDENT.mainpagefunction();
}

else {
cout << "DELETE FAILED!!"<<endl;
cout << "YOU WILL NOW BE RETURNED TO MAIN PAGE TO TRY AGAIN OR PERFORM OTHER ACTIONS\n\n";
STUDENT.mainpagefunction();


}


}


// CREATING THE FUNCTION FOR STAFF INFORMATION.
void STUDENTINFO :: staffinformation ( )  {
string enter;
cout << " ****** WELCOME TO THE STAFF INFORMATION PAGE *****\n\n";
cout << " 1) ADD STAFF"<<endl;
cout << " 2) EDIT STAFF "<<endl;
cout << " 3) DELETE STAFF " << endl;
cout << "ENTER YOUR OPTION NUMBER " <<endl;
cin >> enter;

if (enter == "1" )  {
addstafffunction ( );
}


else if ( enter == "2")  {
editstafffunction ( );
}

else if ( enter == "3") {
deletestafffunction (  );

}



}




// CREATING THE FUNCTION TO ASSIGN STUDENTS TO COURSES.
void STUDENTINFO :: assignstudenttocoursesfunction (  )   {
STUDENTINFO student;
string indexnumber;
double gpa;
string exit;
cout << "PLEASE ENTER THE INDEX NUMBER OF STUDENT" <<endl;
cin >> indexnumber;
cout << "BASED ON YOUR GPA FOR LAST SEMESTER, YOU WILL BE ASSIGNED TO A COURSE(S)." <<endl;
cout << "PLEASE ENTER YOUR GPA FOR LAST SEMESTER"<<endl;
cin >> gpa;

if (gpa >= 0 && gpa <= 1) {
cout << "SORRY, YOU DO NOT QUALIFY FOR ANY OF OUR COURSES." <<endl;
student.mainpagefunction ( );
}

else if (gpa >1 && gpa <=2) {
cout << "STUDENT:"<<indexnumber<<endl;
cout<<"YOU HAVE BEEN ASSIGNED TO STUDY CHINESE, RUSSIAN AND THEATRE ARTS"<<endl;
student.mainpagefunction();
}

else if (gpa > 2 && gpa <3) {
cout << "STUDENT"<<indexnumber<<endl;
cout << "YOU HAVE BEEN ASSIGNED TO STUDY GEOGRAPHY, POLITICAL SCIENCE AND PUBLIC ADMINISTRATION" <<endl;
student.mainpagefunction();
}

else if (gpa >= 3 && gpa <3.6) {
cout << "STUDENT:"<<indexnumber<<endl;
cout << "YOU HAVE BEEN ASSIGNED TO STUDY BSC BUSINESS ADMINISTRATION" <<endl;
student.mainpagefunction();

}

else if (gpa >3.6 && gpa <= 4.0) {
cout << "STUDENT:"<<indexnumber<<endl;
cout << "YOU HAVE BEEN ASSIGNED TO STUDY BSC COMPUTER SCIENCE" <<endl;
student.mainpagefunction();

}

else {
cout << "INVALID ENTRY FOR GPA,GPA SHOULD BE FROM 0 TO 4 PLEASE RETURN TO PAGE AND RE-ENTER CORRECT GPA"<<endl;
student.mainpagefunction();

}

}



// CREATING THE FUNCTION TO EDIT STUDENTS.
void STUDENTINFO :: editstudentfunction (  ) {
string hall;
string newcourse;
string action;
string response;
studentdata student;
STUDENTINFO STUDENT;
cout << "****** WELCOME TO THE EDIT STUDENT PAGE. ******" << endl;
cout << " ENTER THE INDEX NUMBER OF THE STUDENT WHOSE DETAILS YOU WISH TO EDIT." << endl;
cin >> student.studentindexnumber;
cout << "THE FOLLOWING ARE THE DETAILS OF THE STUDENT AVAILABLE FOR EDITING:"<<endl;
cout << "1) EDIT STUDENT PROGRAMME." <<endl;
cout << "2) EDIT STUDENT HALL OF RESIDENCE."<<endl;
cout << "ENTER THE OPTION NUMBER CORRESPONDING TO THE ACTION YOU WISH TO TAKE."<<endl;
cin >> action;
if (action == "1") {
cout << "ARE YOU SURE YOU WANT TO EDIT THE PROGRAMME OF STUDENT  "<< student.studentindexnumber <<"?" <<endl;
cout << "THE STUDENT IS CURRENTLY STUDYING BSC. BIOCHEMISTRY."<<endl;
cout << "ENTER Y TO CONTINUE OR X TO CANCEL AND EXIT PAGE."<<endl;
cin >> response;
if (response == "y" || response == "Y") {
cout << "ENTER THE NEW COURSE OF THE STUDENT"<<endl;
cout << "*WHERE SPACING IS REQUIRED, PLEASE USE THE UNDERSCORE CHARACTER _"<<endl;
cin >> newcourse;
cout << " EDIT SUCCESSFUL!, THE COURSE OF THE STUDENT HAS BEEN CHANGED SUCCESSFULLY." << endl;
STUDENT.mainpagefunction ( );

}

else {
cout << "EDIT FAILED!"<<endl;
STUDENT.mainpagefunction ( );
}


} // for outer if.


else if ( action == "2") {
cout << "ARE YOU SURE YOU WANT TO EDIT THE STUDENT'S HALL OF RESIDENCE ?"<<endl;
cout << "THE STUDENT IS CURRENTLY IN ELIZABETH FRANCES SEY "<<endl;
cout << "ENTER Y TO CONTINUE OR X TO CANCEL AND EXIT PAGE"<<endl;
cin >> response;
if (response == "y" || response == "Y") {
cout << "ENTER THE NEW HALL OF RESIDENCE OF THE STUDENT"<<endl;
cout << "WHERE SPACING IS REQUIRED, PLEASE USE THE UNDERSCORE CHARACTER _"<<endl;
cin >> hall;
cout << " EDIT SUCCESSFUL!, THE STUDENT'S HALL OF RESIDENCE HAS BEEN CHANGED SUCCESSFULLY." << endl;
STUDENT.mainpagefunction ( );

}


else {
cout << "EDIT FAILED!"<<endl;
STUDENT.mainpagefunction ( );
}


}


else {
cout << " INVALID ENTRY, YOU WILL BE TAKEN BACK TO THE MAIN PAGE TO RETRY\n\n\n\n";
STUDENT.mainpagefunction ( );

}


} // for function.




// WRITING THE DEFINITION OF THE MAINPAGEFUNCTION.
void STUDENTINFO :: mainpagefunction (  )   {
STUDENTINFO STUDENT;
string optionnumber;
cout << "/////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n\n\n";
cout << " =============   WELCOME TO THE SCHOOL MANAGEMENT SYSTEM. ================\n \n" ;
cout << "PLEASE SELECT YOUR OPTION: \n\n ";
cout << "1.STUDENT INFORMATION \n\n";
cout << "2.STAFF INFORMATION \n \n";
cout << "3.ADD, EDIT OR DELETE COURSES \n\n";
cout << "ENTER YOUR OPTION NUMBER:\n\n";
cout << "1. THE STUDENT INFORMATION PAGE ALLOWS YOU TO PERFORM THE FOLLOWING OPERATIONS:"<<endl;
cout << "* ADD,EDIT OR DELETE STUDENT RECORDS.\n";
cout << "* ASSIGN STUDENTS TO COURSES\n";
cout << "* RECORD STUDENT GRADE \n";
cout << "* PRINT ACADEMIC RECORD OF STUDENT\n\n";
cout << "2. THE STAFF INFORMATION PAGE ALSO ALLOWS YOU TO PERFORM THE FOLLOWING OPERATIONS:"<<endl;
cout << "* ADD,EDIT OR DELETE STAFF\n\n";
cout << "3. TO ADD,EDIT OR DELETE COURSES, ENTER 3\n\n";
cin >> optionnumber;

if (optionnumber == "1" ) {
STUDENT.studentinformation ( );
}

else if (optionnumber == "2") {

STUDENT.staffinformation ( );

}


else if (optionnumber == "3")
{
STUDENT.manipulatecoursesfunction( );

}

else {

cout << " INVALID OPTION NUMBER ENTERED, PLEASE RE-ENTER A VALID OPTION NUMBER TO CONTINUE. \n\n";
STUDENT.mainpagefunction ( ) ;

}


}



//CREATING THE FUNCTION TO DELETE STUDENTS.
void STUDENTINFO :: deletestudentfunction ( )  {
string reply;
STUDENTINFO STUDENT;
string confirm;
studentdata student;
cout << "****** WELCOME TO THE DELETE STUDENT PAGE ******" << endl;
cout << " PLEASE ENTER THE FOLLOWING DETAILS OF THE STUDENT YOU WISH TO DELETE"	 << endl;
cout << "ENTER STUDENT FIRST NAME:" << endl;
cin >>  student.studentfirstname;
cout << "ENTER STUDENT LAST NAME:"<<endl;
cin >> student.studentlastname;
cout << "ENTER STUDENT INDEX NUMBER:"<< endl;
cin >> student.studentindexnumber;
cout << "\n\n" ;
cout << "HERE ARE THE DETAILS OF THE STUDENT YOU WISH TO DELETE" <<endl;
cout << "STUDENT FIRST NAME:  "<< student.studentfirstname <<endl;
cout << "STUDENT LAST NAME:  "<< student.studentlastname<<endl;
cout << "STUDENT INDEX NUMBER:  "<< student.studentindexnumber<<endl;
cout << "PLEASE CONFIRM THE ABOVE DETAILS PROVIDED AND PROCEED"<<endl;
cout << " ENTER YES IF DETAILS ARE CORRECT AND NO IF DETAILS ARE INCORRECT"<<endl;
cin >> reply;

if (reply == "YES" || reply == "yes" || reply == "y" || reply == "Y")  {

cout << " ARE YOU SURE YOU WANT TO DELETE THIS STUDENT RECORD?" <<endl;
cout << "YES/NO" <<endl;
cin >> confirm;

if (confirm == "YES" || confirm == "yes" || confirm == "Y" || confirm == "y")  {

cout << "STUDENT NAME:  " << student.studentfirstname<<student.studentlastname << endl;
cout << "STUDENT INDEX NUMBER:  " << student.studentindexnumber <<endl;
cout << " STUDENT HAS BEEN SUCCESSFULLY DELETED FROM DATABASE!"	 <<endl;

mainpagefunction ( );

}

else if (confirm == "NO" || confirm == "no" || confirm == "No" || confirm == "N" || confirm =="n") {
cout << "INCORRECT DETAILS ENTERED, YOU WILL BE REDIRECTED TO THE PREVIOUS PAGE TO RE-ENTER THE CORRECT DETAILS AND PROCEED" <<endl;

deletestudentfunction (  );

}


else {
cout << "DELETE FAILED DUE TO INVALID ENTRY, YOU WILL BE TAKEN BACK TO TRY AGAIN "<<endl;
STUDENT.mainpagefunction ( );
}


}


else {
cout << "DELETE FAILED!!, " << "YOU WILL BE RETURNED TO MAIN PAGE TO TRY AGAIN" <<endl;
STUDENT.mainpagefunction();

}


}



// CREATING THE FUNCTION TO ADD NEW STUDENTS.
void STUDENTINFO :: addnewstudentfunction (  )  {
STUDENTINFO STUDENT;
studentdata student;
char answer;
cout << "****** WELCOME TO THE ADD NEW STUDENT PLATFORM ******" << endl;
cout << "PLEASE ENTER THE FOLLOWING DETAILS FOR THE NEW STUDENT YOU WISH TO ADD" <<endl;
cout << "*WHERE SPACING IS REQUIRED, USE THE UNDERSCORE CHACACTER \n\n";
cout << "ENTER STUDENT FIRST NAME:"<<endl;
cin >> student.studentfirstname;
cout << "ENTER MIDDLE NAME"<<endl;
cin >> student.studentmiddlename;
cout << " ENTER STUDENT LAST NAME " << endl;
cin >> student.studentlastname;
cout << "ENTER STUDENT AGE"<<endl;
cin>>student.studentage;
cout << "ENTER STUDENT INDEX NUMBER" << endl;
cin >> student.studentindexnumber;
cout << " ENTER STUDENT BLOOD GROUP"<<endl;
cin >> student.studentbloodgroup;
cout << "ENTER STUDENT PROGRAMME"<<endl;
cin >> student.studentprogramme;
cout << "ENTER STUDENT HALL OF RESIDENCE"<<endl;
cin >> student.studenthallofresidence;
cout << "HERE ARE THE DETAILS OF THE NEW STUDENT YOU WISH TO ADD. PLEASE CROSS-CHECK THEM FOR CERTAINTY.\n\n";
cout << "STUDENT FIRST NAME:"<<student.studentfirstname<<endl;
cout << "STUDENT MIDDLE NAME:"<<student.studentmiddlename<<endl;
cout << "STUDENT LAST NAME:" <<student.studentlastname<<endl;
cout << "STUDENT AGE:" << student.studentage<<endl;
cout << "STUDENT ID NUMBER:"<< student.studentindexnumber<<endl;
cout << "STUDENT BLOOD GROUP:" << student.studentbloodgroup<<endl;
cout << "STUDENT PROGRAMME:" << student.studentprogramme<<endl;
cout << "STUDENT HALL OF RESIDENCE " << student.studenthallofresidence<<endl;
cout <<"STUDENT HAS BEEN SUCCESSFULLY ADDED.\n\n";
cout <<"DO YOU WISH TO ADD ANOTHER STUDENT?\n\n";
cout << "Y/N\n";
cout << " ENTER Y IF YOU WISH TO ADD A NEW STUDENT OR N IF YOU WANT TO EXIT THIS PAGE\n";
cin >> answer;

if (answer == 'Y') {
addnewstudentfunction ( ); // THE FUNCTION SHOULD CALL ITSELF.
}

else if (answer == 'N') {

}

STUDENT.mainpagefunction (  );


}



// FUNCTION TO PRINT STUDENT ACADEMIC RECORD.
void STUDENTINFO :: printacademicrecordfunction (  ) {
STUDENTINFO STUDENT;
studentdata student;
string answer;
string goback;
cout << "****** PRINT STUDENT ACADEMIC RECORD ****** " << endl;
cout << "PLEASE ENTER THE STUDENT INDEX NUMBER TO PRINT THE ACADEMIC RECORD\n";
cin >> student.studentindexnumber;
cout << " YOU HAVE CHOSEN TO PRINT THE ACADEMIC RECORD OF STUDENT  " << student.studentindexnumber << endl;
cout << " ENTER Y TO COMPLETE PRINTING OF ACADEMIC RECORD OR ENTER X TO EXIT"<<endl;
cin >> answer;
if (answer == "Y" || answer == "y") {
cout << "ACADEMIC RECORD OF STUDENT "<< student.studentindexnumber << " IS AS FOLLOWS:\n\n";
cout << "STUDENT INDEX NUMBER:  " << student.studentindexnumber <<endl;
cout << "\n\n";
cout << "|COURSE CODE|      |  COURSE TITLE        |        |NUMBER OF CREDIT HOURS|      | GRADE |      | GRADE POINT |      | INTERPRETATION | \n\n";
cout << "|MATH 223   |      |  CALCULUS II         |        |          3           |      |  B+   |      | 10.5        |      | VERY GOOD      | \n";
cout << "|CSCD 207   |      | NUMERICAL METHODS    |        |          3           |      |  A    |      | 12.0        |      | EXCELLENT      | \n";
cout << "|CSCD 205   |      |PROGRAMMING I (C++)   |        |          3           |      |  A    |      | 12.0        |      | EXCELLENT      | \n";
cout << "|CSCD 201   |      |INFORMATION SYSTEMS   |        |          3           |      |  A    |      | 12.0        |      | EXCELLENT      | \n";
cout << "|UGRC 210   |      |ACADEMIC WRITING II   |        |          3           |      |  B+   |      | 10.5        |      | VERY GOOD      | \n";
cout << "|CSCD 207   |      |COMPUTER ARCHITECTURE |        |          3           |      |  B    |      | 9.0         |      | GOOD           | \n\n";
cout << "                                                       TOTAL =  18          \n\n";
cout << " GPA FOR CURRENT RESULTS IS 3.67 " << " GOOD JOB!, KEEP IT UP!!\n\n";
cout << " PRINTING OF ACADEMIC RECORD SUCCESSFUL." << endl;
cout << " ENTER R TO RETURN TO MAIN PAGE " << endl;
cin >> goback;

if ( goback == "r" || goback == "R") {
STUDENT.mainpagefunction (  );
}

else {
STUDENT.mainpagefunction (  );
}


}

else if (answer == "X" || answer == "x") {
cout << " PRINTING OF ACADEMIC RECORD UNSUCCESSFUL." << endl;
cout << " YOU HAVE CHOSEN TO EXIT THIS PAGE. YOU WILL BE TAKEN BACK TO THE MAIN PAGE\n\n ";
STUDENT.mainpagefunction (  );

}

else {
cout << "INVALID ENTRY, YOU WILL BE RETURNED TO THE MAIN PAGE TO TRY AGAIN\n\n";
STUDENT.mainpagefunction (  );
}


}




// FUNCTION TO RECORD STUDENT GRADE.
void STUDENTINFO ::graderecordfunction (  )  {
STUDENTINFO student;

studentdata STUDENT;

string ans;
string g,r,a,d,e,s;
cout << "PLEASE ENTER THE INDEX NUMBER OF THE STUDENT WHOSE GRADE YOU WISH TO RECORD"<<endl;
cin >> 	STUDENT.studentindexnumber ;
cout << "INDEX NUMBER:"<<STUDENT.studentindexnumber<<endl;
cout << "HERE ARE THE LIST OF COURSES REGISTERED FOR BY STUDENT: "<< STUDENT.studentindexnumber<<endl;
cout << "MATH 223: CALCULUS II" <<endl;
cout << "CSCD 205: PROGRAMMING I (WITH C++)"<<endl;
cout << "CSCD 207: NUMERICAL METHODS"<<endl;
cout << "CSCD 201: INFORMATION SYSTEMS" <<endl;
cout << "CSCD 207: COMPUTER ORGANIZATION AND ARCHITECTURE"<<endl;
cout << "UGRC 210: ACADEMIC WRITING II\n\n";
cout << "PLEASE PROCEED TO ENTER THE GRADE OBTAINED BY STUDENT "<<STUDENT.studentindexnumber<< " FOR ALL THE REGISTERED COURSES"<<endl;
cout << " PLEASE ENTER STUDENT GRADE FOR MATH 223: CALCULUS II"<<endl;
cin >> g;

cout << " PLEASE ENTER STUDENT GRADE FOR CSCD 205: PROGRAMMING I ( WITH C++ )"<<endl;
cin >> r;

cout << "PLEASE ENTER STUDENT GRADE FOR CSCD 205: NUMERICAL METHODS"<<endl;
cin >> a;

cout << "PLEASE ENTER STUDENT GRADE FOR CSCD 201: INFORMATION SYSTEMS"<<endl;
cin >>d;

cout << "PLEASE ENTER STUDENT GRADE FOR CSCD207: COMPUTER ORGANIZATION AND ARCHITECTURE"<<endl;
cin >> e;

cout << "PLEASE ENTER STUDENT GRADE FOR UGRC 210: ACADEMIC WRITING I"<<endl;
cin >> s;

cout <<"\n\n\n";
cout << " HERE ARE THE GRADES ENTERED FOR THE COURSES: \n\n";
cout << " PLEASE CHECK THEM FOR CERTAINTY."<<endl;
cout << "* MATH 223 ( CALCULUS II )"<< "GRADE = "<< g <<endl;
cout <<"\n";

cout << "* CSCD 205 (PROGRAMMING I WITH C++)" << "GRADE = " << r <<endl;
cout<<"\n";

cout << "* CSCD 207 ( NUMERICAL METHODS )" << " GRADE = " << a << endl;
cout << "\n";

cout << "* CSCD 201 ( INFORMATION SYSTEM S)" << "GRADE = " << d<< endl;
cout << "\n";

cout << "* CSCD 207 ( COMPUTER ORGANIZATION AND ARCHITECTURE )" << "GRADE = " << e << endl;
cout << "\n";

cout << "*UGRC 210 ( ACADEMIC WRITING II ) " << " GRADE = " << s << endl;
cout << "\n";

cout << "PLEASE CHECK TO SEE IF ALL THE GRADES ENTERED ARE CORRECT."<<endl;
cout << "ENTER YES IF THE ENTERED GRADES ARE ALL CORRECT TO SAVE AND RECORD THEM SUCCESSFULLY AND EXIT PAGE.\n";
cout << "ENTER NO IF THERE IS AN ERROR IN THE ENTERED GRADES TO GO BACK TO PAGE AND CORRECT THE ERRORS\n";

cin >> ans;

 if (ans == "YES" || ans == "yes") {
cout << "YOU HAVE CONFIRMED THAT ALL ENTERED GRADES OF THE STUDENT ARE CORRECT.\n";
cout << "THE ENTERED GRADES OF THE STUDENT HAVE BEEN SAVED AND RECORDED SUCCESSFULLY !!\n\n";

student.mainpagefunction ( );
 }

else if (ans == "NO" || ans == "no") {
cout << "IT SEEMS THERE ARE SOME ERRORS IN THE ENTERED GRADES OF THE STUDENT.\n";
cout << "YOU WILL BE TAKEN BACK TO THE PAGE TO RE-ENTER THE STUDENT GRADES\n\n\n ";
cout << "****** RECORD STUDENT GRADE PAGE *******\n\n";
graderecordfunction ( );

}


}




// FUNCTION TO HOLD STUDENT INFORMATION.
void STUDENTINFO :: studentinformation (  ) {
STUDENTINFO STUDENT;
string number;
string choicenumber;
cout << "========== STUDENT DETAILS AND INFORMATION =========== \n\n";
cout << "1) ADD,EDIT OR DELETE STUDENT\n";
cout << "2) ASSIGN STUDENT TO COURSES \n ";
cout << "3) RECORD STUDENT GRADE \n";
cout << "4) PRINT ACADEMIC RECORD OF STUDENT "<<endl;
cout << " PLEASE ENTER YOUR CHOICE \n";
cin >> number;
if (number == "1") {
cout << "WELCOME TO THE ADD/EDIT/DELETE STUDENT PAGE." <<endl;
cout << "1.ADD NEW STUDENT"<<endl;
cout << "2.EDIT STUDENT" << endl;
cout << "3.DELETE STUDENT"<< endl;
cout << "PLEASE SELECT YOUR ACTION" <<endl;
cin >> 	choicenumber;

if (choicenumber == "1") {
addnewstudentfunction ( );
}


else if (choicenumber == "2")  {
editstudentfunction (  );
}


else if (choicenumber == "3") {
deletestudentfunction ( );
}

}


else if (number == "2") {
cout << "WELCOME TO THE ASSIGN STUDENT TO COURSES PAGE" << endl;

assignstudenttocoursesfunction ( );
}

else if (number == "3")  {
cout << "STUDENT GRADE RECORD PAGE"<<endl;
graderecordfunction (  );
}

else if (number == "4") {
STUDENT.printacademicrecordfunction() ;
}


}



// THE MAIN FUNCTION.
int main (  )  {

STUDENTINFO STUDENT;

STUDENT.mainpagefunction ( );


system ("title SCHOOL MANAGEMENT SYSTEM");



return 0;
}
