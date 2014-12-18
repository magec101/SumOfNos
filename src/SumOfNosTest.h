#include <cxxtest/TestSuite.h>

extern int sumOfNosMain(int argc, const char** argv);

class SumOfNosTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
   void test_Unit_Test_2(){
       
	    const char* largv[] = {"1","1", "4" };
		
		

	    TS_ASSERT_EQUALS(10,sumOfNosMain(3, largv));
	

   }
   
   void test_Unit_Test_3(){
       
	    const char* largv[] = {"1","2", "4" };
		
		

	    TS_ASSERT_EQUALS(30,sumOfNosMain(3, largv));
	

   }
}; 