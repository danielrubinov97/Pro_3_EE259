#include "sample_p2.h" // implementation of base class
// No need to include any further libraries because they are all in the previous classes.
using namespace std;

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

BURSAR_INFO::BURSAR_INFO(int x, int y)
	: SORT_INFO(x, y) // call to base class which requires two parameters
{
	output_file_p3 << "++++++ P3 START ++++++" << endl; //ERROR MUST BE + PLUSES!
	output_file_p3 << "++++++ P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR :" << endl;
	output_file_p3 << "++++++ P3 AN OBJECT OF BURSAR_INFO IS CREATED." << endl;
	output_file_p3 << "++++++ P3 END ++++++" << endl;
}// end method

void
BURSAR_INFO::CHANGE_GRADE(int x, int y, int z)
{
	int i = 0, FOUND = 0;
	output_file_p3 << "++++++ P3 START ++++++" << endl; //ERROR MUST BE + PLUSES!
	output_file_p3 << "++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD:" << endl;
 	if(y < p && z >= 0 && z <= 100 && x > 0){
		for (i = 0; i < n; i++) { //find the correct ID in the array.
			if (ids[i] == x && y < p) {
				LIST_GRADE(x);
				grades[i][y] = z;
				output_file_p3 << "++++++ P3 STUDENT " << x << " EXAM " << y << " IS CHANGED AS " << z << "." << endl;
				FOUND = 1;
				LIST_GRADE(x);
				break;
			}
		}
	}
	else{
		output_file_p3 << "++++++ P3 INPUT ERROR. " << endl << "++++++ P3 END ++++++" << endl;
		return;
	}
	if(FOUND == 0 && i != 0) output_file_p3 << "++++++ P3 NO SUCH STUDENT WITH ID " << x << endl;  
	output_file_p3 << "++++++ P3 END ++++++" << endl;
}// end method

void
BURSAR_INFO::VERIFY_GRADE(char * F, char* L, int x, int y) //First, Last, Exam #(starting from 0), Exam Grade.
{
	int i;
	output_file_p3 << "++++++ P3 START ++++++" << endl; //ERROR MUST BE + PLUSES!	
	output_file_p3 << "++++++ P3 OUTPUT FROM VERIFY_GRADE METHOD:" << endl;
	if(x < p && y <= 100 && y >= 0){
		for (i = 0; i < n; i++){
			if(strcmp(FirstName[i], F) == 0  && strcmp(LastName[i], L) == 0  && grades[i][x] == y){
				output_file_p3 << "++++++ P3 STUDENT " << FirstName[i] << " " << LastName[i] << " RECEIVED " << grades[i][x] << " GRADE IN EXAM " << x << "." << endl;
			break;
			}else{};
		}
	}else { 
		output_file_p3 << "++++++ P3 INPUT ERROR. " << endl << "++++++ P3 END ++++++" << endl;
		return;
	}
	if(strcmp(FirstName[i], F) != 0 || strcmp(LastName[i], L) != 0) output_file_p3 << "++++++ P3 NO SUCH STUDENT WITH FIRST NAME " << F << " AND LAST NAME " << L << "." << endl;
	else if(grades[i][x] != y) output_file_p3 << "++++++ P3 INPUT ERROR. " << endl;
	output_file_p3 << "++++++ P3 END ++++++" << endl;
}// end method

void
BURSAR_INFO::SORT_NAMES()
{
	output_file_p3 << "++++++ P3 START ++++++" << endl; //ERROR MUST BE ENDING WITH 6 PLUSES!
	output_file_p3 << "++++++ P3 OUTPUT FROM SORT_NAMES METHOD: " << endl;
	SORT_NAME("ASCENDING");
	output_file_p3 << "++++++ P3 END ++++++" << endl; //ERROR MUST BE ENDING WITH 6 PLUSES!
}// end method
