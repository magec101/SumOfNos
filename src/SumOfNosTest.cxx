/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SumOfNosTest_init = false;
#include "/var/www/html/codeit/workspace/SumOfNos/src/SumOfNosTest.h"

static SumOfNosTest suite_SumOfNosTest;

static CxxTest::List Tests_SumOfNosTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SumOfNosTest( "/var/www/html/codeit/workspace/SumOfNos/src/SumOfNosTest.h", 5, "SumOfNosTest", suite_SumOfNosTest, Tests_SumOfNosTest );

static class TestDescription_suite_SumOfNosTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SumOfNosTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_SumOfNosTest, suiteDescription_SumOfNosTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_SumOfNosTest.test_Unit_Test_1(); }
} testDescription_suite_SumOfNosTest_test_Unit_Test_1;

static class TestDescription_suite_SumOfNosTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SumOfNosTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_SumOfNosTest, suiteDescription_SumOfNosTest, 19, "test_Unit_Test_2" ) {}
 void runTest() { suite_SumOfNosTest.test_Unit_Test_2(); }
} testDescription_suite_SumOfNosTest_test_Unit_Test_2;

static class TestDescription_suite_SumOfNosTest_test_Unit_Test_3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SumOfNosTest_test_Unit_Test_3() : CxxTest::RealTestDescription( Tests_SumOfNosTest, suiteDescription_SumOfNosTest, 30, "test_Unit_Test_3" ) {}
 void runTest() { suite_SumOfNosTest.test_Unit_Test_3(); }
} testDescription_suite_SumOfNosTest_test_Unit_Test_3;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
