//When submitting add string.h library
#include "sample_p2.h" // implementation of base class

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
	output_file_p3 << "++++++P3 START++++++" << endl; //ERROR MUST BE + PLUSES!
	output_file_p3 << "++++++P3 OUTPUT FROM BURSAR_INFO CONSTRUCTOR :" << endl;
	output_file_p3 << "++++++P3 AN OBJECT OF BURSAR_INFO IS CREATED." << endl;
	output_file_p3 << "++++++P3 END++++++" << endl;
}// end method

void
BURSAR_INFO::CHANGE_GRADE(int x, int y, int z)
{
	int i;
	//int FOUND, FOUND_POS;
	output_file_p3 << "++++++P3 START++++++" << endl;
	output_file_p3 << "++++++ P3 OUTPUT FROM CHANGE_GRADE METHOD:" << endl;
	LIST_GRADE(x);
	for (i = 0; i < n; i++) { //find the correct ID in the array.
		if (ids[i] == x && y < p) {
				grades[i][y] = z;
				output_file_p3 << "++++++ P3 STUDENT 3333 EXAM " << y << " IS CHANGED AS " << z << "." << endl;
				LIST_GRADE(x);
				break;
		}
	}
	output_file_p3 << "++++++P3 END++++++" << endl;
}// end method

void
BURSAR_INFO::VERIFY_GRADE(char * F, char* L, int x, int y)
{

}// end method

void
BURSAR_INFO::SORT_NAMES()
{

}// end method
