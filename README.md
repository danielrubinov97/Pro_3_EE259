# Pro_3 OUTLINE FROM EE259 COURSE
## My Solution: Daniel Rubinov
###	\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
###	\_                                                                    \_
###	\_   THE CITY COLLEGE OF NEW YORK, ELECTRICAL ENGINEERING DEPARTMENT  \_
###	\_                EE259, DAY-EVENING SECTIONS, FALL 2018              \_
###	\_                                                                    \_
###	\_                              PROJECT 3                             \_
###	\_                                                                    \_
###	\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

PROJECT 3 DESCRIPTION:

Write a C++ class definition called BURSAR_INFO SORT_INFO which will 
perform the following tasks. BURSAR_INFO class will inherit from 
SORT_INFO class, which in turn inherits from STUDENT_GRADE and
STUDENT_ID classes.

The prototype for BURSAR_INFO class is defined as follows:

  class BURSAR_INFO:public SORT_INFO{
   public:      // public methods for this class

        BURSAR_INFO(int, int);  
			// Example: BURSAR_INFO b(x, y);
                        // instantiate an object b of class BURSAR_INFO
			// there are x students and y exams;

        void CHANGE_GRADE(int, int, int); 
                        // Example: b.CHANGE_GRADE(x, y, z);
                        // change the grade for student x, and exam y
			// to grade z;
                        // returns no values;

        void VERIFY_GRADE(char *, char*, int, int);    
                        // Example: b.VERIFY_GRADE("First","Last", 2, 50);
                        // check if student First Last received 50 for exam 2;
                        // returns no values;

	void SORT_NAMES();
                        // Example: b.SORT_NAMES();
			// sort students in alphabetical order;
			// returns no values;
   };

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

An example use of the constructor is as follows:

        BURSAR_INFO X(w, z); 

which instantiates an object X of class BURSAR_INFO.  Integers w and z
represent the number of students and exams, respectively. This constructor 
will call the constructor of the base class SORT_INFO.

The output to out.3.txt.txt file is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR:
	++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED.
	++++++ P3 END ++++

Note that the constructors for SORT_INFO, STUDENT_GRADE and STUDENT_ID 
will also generate their own outputs automatically as they are called 
by the constructors.

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

The definition of CHANGE_GRADE method is as follows:

	b.CHANGE_GRADE(x, y, z);

where b is a object of class BURSAR_INFO,  integers x, y and z
represent the student id, exam number and grade, respectively. This method
changes the grade for exam y as z.  The output to out.3.txt is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
	++ P1 START ++
	++ P1 OUTPUT FROM LIST_GRADE METHOD:
	++ P1 GRADES FOR STUDENT x:
	++ P1 GRADE FOR EXAM 0 IS: int_x_0
	++ P1 GRADE FOR EXAM 1 IS: int_x_1
	...
	++ P1 GRADE FOR EXAM p IS: int_x_p-1
	++ P1 END ++
	++++++ P3 STUDENT x EXAM y IS CHANGED AS z.
	++ P1 START ++
	++ P1 OUTPUT FROM LIST_GRADE METHOD:
	++ P1 GRADES FOR STUDENT x:
	++ P1 GRADE FOR EXAM 0 IS: int_x_0
	++ P1 GRADE FOR EXAM 1 IS: int_x_1
	...
	++ P1 GRADE FOR EXAM p IS: int_x_p-1
	++ P1 END ++
	++++++ P3 END ++++

You will use LIST_GRADE method from STUDENT_GRADE class to list the grades 
before and after the change as shown above.

If there is no student x, the output to out.3.txt is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
	++++++ P3 NO SUCH STUDENT WITH ID x
	++++++ P3 END ++++

If x, y, and/or z has illegal values, the output to out.3.txt is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
	++++++ P3 INPUT ERROR.
	++++++ P3 END ++++

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

The definition of VERIFY_GRADE method is as follows:

        b.VERIFY_GRADE("FIRST","LAST",x, y)

where integers x and y are the exam number and grade, respectively, for a student 
whose first and last names are "FIRST" and "LAST", respectively . This method 
verifies if this student received grade y in exam x.  The output to out.3.txt is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD: 
	++++++ P3 STUDENT FIRST LAST RECEIVED y GRADE IN EXAM x.  
	++++++ P3 END ++++

If the student did not receive grade y in exam x, the output to out.3.txt is:
  
	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD: 
	++++++ P3 STUDENT FIRST LAST DID NOT RECEIVE y GRADE IN EXAM x.  
	++++++ P3 END ++++

If there is no such student, the output to out.3.txt is:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD: 
	++++++ P3 NO SUCH STUDENT WITH FIRST NAME FIRST AND LAST NAME LAST.
	++++++ P3 END ++++

If x and/or y values are illegal, the output:

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD: 
	++++++ P3 INPUT ERROR.
	++++++ P3 END ++++

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

The definition of SORT_NAMES method is as follows:

	b.SORT_NAMES();

This method sorts the student names in alphabetical order by calling
the SORT_NAMES("ASCENDING") method in SORT_INFO class. 

	++++++ P3 START ++++
	++++++ P3 OUTPUT FROM SORT_NAMES METHOD: 
	... output from SORT_NAME method comes here...
	++++++ P3 END ++++

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

:::::::::::::: EXAMPLE 1 ::::::::::::::::::::: 
---------CONTENTS OF main3_1.cc FILE:-----------
#include "p3.h"
// example program: main3_1.cc
int main ()
{
        BURSAR_INFO G(5, 4); // instantiate an object C of class SORT_INFO
			// with 5 student ids each with 4 exams

	G.CHANGE_GRADE(3333, 1, 53); // change student 3333 exam 1 grade to 53
	
	return 0;
}
---------CONTENTS OF studentName.txt FILE:---------------
BUSH    ROB    
PAPA	JOE   
LEE     MARIA  
WONG	ANITA  
CARTER  SHAOYI 
---------CONTENTS OF studentGrade.txt FILE:---------------
81 91 61 71 
83 93 63 73
82 92 62 72
85 95 65 75
84 94 64 74
---------CONTENTS OF studentId.txt FILE:---------------
1111
3333
2222
5555
4444
---------EXPECTED CONTENTS OF out.3.txt FILE:-----
+ P0 START +
+ P0 OUTPUT FROM STUDENT_ID CONSTRUCTOR:
+ P0 INSTANTIATED AN OBJECT OF CLASS STUDENT_ID WITH 5 STUDENT IDS.
+ P0 END +
++ P1 START ++
++ P1 OUTPUT FROM STUDENT_GRADE CONSTRUCTOR:
++ P1 AN OBJECT OF STUDENT_GRADE IS CREATED WITH 5 STUDENTS AND 4 EXAMS EACH.
++ P1 END ++
++++ P2 START ++++
++++ P2 OUTPUT FROM SORT_INFO CONSTRUCTOR:
++++ P2 AN OBJECT OF SORT_INFO IS CREATED.
++++ P2 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR:
++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
++ P1 START ++
++ P1 OUTPUT FROM LIST_GRADE METHOD:
++ P1 GRADES FOR STUDENT 3333:
++ P1 GRADE FOR EXAM 0 IS: 83
++ P1 GRADE FOR EXAM 1 IS: 93
++ P1 GRADE FOR EXAM 2 IS: 63
++ P1 GRADE FOR EXAM 3 IS: 73
++ P1 END ++
++++++ P3 STUDENT 3333 EXAM 1 IS CHANGED AS 53.
++ P1 START ++
++ P1 OUTPUT FROM LIST_GRADE METHOD:
++ P1 GRADES FOR STUDENT 3333:
++ P1 GRADE FOR EXAM 0 IS: 83
++ P1 GRADE FOR EXAM 1 IS: 53
++ P1 GRADE FOR EXAM 2 IS: 63
++ P1 GRADE FOR EXAM 3 IS: 73
++ P1 END ++
++++++ P3 END ++++
:::::::::::::: EXAMPLE 2 ::::::::::::::::::::: 
---------CONTENTS OF main3_2.cc FILE:-----------
#include "p3.h"
// example program: main3_2.cc
int main ()
{
        BURSAR_INFO G(5, 4); // instantiate an object C of class SORT_INFO
			// with 5 student ids each with 4 exams

	G.VERIFY_GRADE("MARIA", "LEE", 1, 92); // verify that student's exam 1 grade is 92
	G.CHANGE_GRADE(2222, 1, 52); // change student 2222 exam 1 grade to 52
	G.VERIFY_GRADE("MARIA", "LEE", 1, 52); // verify that student's exam 1 grade is 52
	
	return 0;
}
---------CONTENTS OF studentName.txt FILE:---------------
BUSH    ROB    
PAPA	JOE   
LEE     MARIA  
WONG	ANITA  
CARTER  SHAOYI 
---------CONTENTS OF studentGrade.txt FILE:---------------
81 91 61 71 
83 93 63 73
82 92 62 72
85 95 65 75
84 94 64 74
---------CONTENTS OF studentId.txt FILE:---------------
1111
3333
2222
5555
4444
---------EXPECTED CONTENTS OF out.3.txt FILE:-----
+ P0 START +
+ P0 OUTPUT FROM STUDENT_ID CONSTRUCTOR:
+ P0 INSTANTIATED AN OBJECT OF CLASS STUDENT_ID WITH 5 STUDENT IDS.
+ P0 END +
++ P1 START ++
++ P1 OUTPUT FROM STUDENT_GRADE CONSTRUCTOR:
++ P1 AN OBJECT OF STUDENT_GRADE IS CREATED WITH 5 STUDENTS AND 4 EXAMS EACH.
++ P1 END ++
++++ P2 START ++++
++++ P2 OUTPUT FROM SORT_INFO CONSTRUCTOR:
++++ P2 AN OBJECT OF SORT_INFO IS CREATED.
++++ P2 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR:
++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD:
++++++ P3 STUDENT MARIA LEE RECEIVED 92 GRADE IN EXAM 1.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
++ P1 START ++
++ P1 OUTPUT FROM LIST_GRADE METHOD:
++ P1 GRADES FOR STUDENT 2222:
++ P1 GRADE FOR EXAM 0 IS: 82
++ P1 GRADE FOR EXAM 1 IS: 92
++ P1 GRADE FOR EXAM 2 IS: 62
++ P1 GRADE FOR EXAM 3 IS: 72
++ P1 END ++
++++++ P3 STUDENT 2222 EXAM 1 IS CHANGED AS 52.
++ P1 START ++
++ P1 OUTPUT FROM LIST_GRADE METHOD:
++ P1 GRADES FOR STUDENT 2222:
++ P1 GRADE FOR EXAM 0 IS: 82
++ P1 GRADE FOR EXAM 1 IS: 52
++ P1 GRADE FOR EXAM 2 IS: 62
++ P1 GRADE FOR EXAM 3 IS: 72
++ P1 END ++
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD:
++++++ P3 STUDENT MARIA LEE RECEIVED 52 GRADE IN EXAM 1.
++++++ P3 END ++++
:::::::::::::: EXAMPLE 3 ::::::::::::::::::::: 
---------CONTENTS OF main3_3.cc FILE:-----------
#include "p3.h"
// example program: main3_3.cc
int main ()
{
        BURSAR_INFO G(5, 4); // instantiate an object C of class SORT_INFO
			// with 5 student ids each with 4 exams

	G.SORT_NAMES(); // sort names in alphabetical order
	
	return 0;
}
---------CONTENTS OF studentName.txt FILE:---------------
BUSH    ROB    
PAPA	JOE   
LEE     MARIA  
WONG	ANITA  
CARTER  SHAOYI 
---------CONTENTS OF studentGrade.txt FILE:---------------
81 91 61 71 
83 93 63 73
82 92 62 72
85 95 65 75
84 94 64 74
---------CONTENTS OF studentId.txt FILE:---------------
1111
3333
2222
5555
4444
---------EXPECTED CONTENTS OF out.3.txt FILE:-----
+ P0 START +
+ P0 OUTPUT FROM STUDENT_ID CONSTRUCTOR:
+ P0 INSTANTIATED AN OBJECT OF CLASS STUDENT_ID WITH 5 STUDENT IDS.
+ P0 END +
++ P1 START ++
++ P1 OUTPUT FROM STUDENT_GRADE CONSTRUCTOR:
++ P1 AN OBJECT OF STUDENT_GRADE IS CREATED WITH 5 STUDENTS AND 4 EXAMS EACH.
++ P1 END ++
++++ P2 START ++++
++++ P2 OUTPUT FROM SORT_INFO CONSTRUCTOR:
++++ P2 AN OBJECT OF SORT_INFO IS CREATED.
++++ P2 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR:
++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM SORT_NAMES METHOD: 
++++ P2 START ++++
++++ P2 OUTPUT FROM SORT_NAME METHOD:
++++ P2 BEFORE SORTING LAST NAMES IN ALPHABETICAL ORDER:
++ P1 START ++
++ P1 OUTPUT FROM LIST_IDS METHOD:
+ P0 START +
+ P0 OUTPUT FROM LIST_ID METHOD:
+ P0 STUDENT IDS FOR 5 STUDENTS:
+ P0 1111
+ P0 3333
+ P0 2222
+ P0 5555
+ P0 4444
+ P0 END +
++ P1 END ++
++++ P2 AFTER SORTING LAST NAMES IN ALPHABETICAL ORDER:
++ P1 START ++
++ P1 OUTPUT FROM LIST_IDS METHOD:
+ P0 START +
+ P0 OUTPUT FROM LIST_ID METHOD:
+ P0 STUDENT IDS FOR 5 STUDENTS:
+ P0 1111
+ P0 4444
+ P0 2222
+ P0 3333
+ P0 5555
+ P0 END +
++ P1 END ++
++++ P2 END ++++
++++++ P3 END ++++
:::::::::::::: EXAMPLE 4 ::::::::::::::::::::: 
---------CONTENTS OF main3_4.cc FILE:-----------
#include "p3.h"
// example program: main3_4.cc
int main ()
{
        BURSAR_INFO G(5, 4); // instantiate an object C of class SORT_INFO
			// with 5 student ids each with 4 exams

	G.CHANGE_GRADE(-2222, 1, 53); // input error
	G.CHANGE_GRADE(3333, 6, 53); // input error
	G.VERIFY_GRADE("MARIA", "LEE", 1, -5); // input error
	
	return 0;
}
---------CONTENTS OF studentName.txt FILE:---------------
BUSH    ROB    
PAPA	JOE   
LEE     MARIA  
WONG	ANITA  
CARTER  SHAOYI 
---------CONTENTS OF studentGrade.txt FILE:---------------
81 91 61 71 
83 93 63 73
82 92 62 72
85 95 65 75
84 94 64 74
---------CONTENTS OF studentId.txt FILE:---------------
1111
3333
2222
5555
4444
---------EXPECTED CONTENTS OF out.3.txt FILE:-----
+ P0 START +
+ P0 OUTPUT FROM STUDENT_ID CONSTRUCTOR:
+ P0 INSTANTIATED AN OBJECT OF CLASS STUDENT_ID WITH 5 STUDENT IDS.
+ P0 END +
++ P1 START ++
++ P1 OUTPUT FROM STUDENT_GRADE CONSTRUCTOR:
++ P1 AN OBJECT OF STUDENT_GRADE IS CREATED WITH 5 STUDENTS AND 4 EXAMS EACH.
++ P1 END ++
++++ P2 START ++++
++++ P2 OUTPUT FROM SORT_INFO CONSTRUCTOR:
++++ P2 AN OBJECT OF SORT_INFO IS CREATED.
++++ P2 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR:
++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
++++++ P3 INPUT ERROR.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD: 
++++++ P3 INPUT ERROR.
++++++ P3 END ++++
++++++ P3 START ++++
++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD:
++++++ P3 INPUT ERROR.
++++++ P3 END ++++
