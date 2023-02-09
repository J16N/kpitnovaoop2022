/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_calcTestSuite_init = false;
#include "test.h"

static calcTestSuite suite_calcTestSuite;

static CxxTest::List Tests_calcTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_calcTestSuite( "test.h", 4, "calcTestSuite", suite_calcTestSuite, Tests_calcTestSuite );

static class TestDescription_suite_calcTestSuite_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testAddition() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 7, "testAddition" ) {}
 void runTest() { suite_calcTestSuite.testAddition(); }
} testDescription_suite_calcTestSuite_testAddition;

static class TestDescription_suite_calcTestSuite_testSubtraction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testSubtraction() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 17, "testSubtraction" ) {}
 void runTest() { suite_calcTestSuite.testSubtraction(); }
} testDescription_suite_calcTestSuite_testSubtraction;

static class TestDescription_suite_calcTestSuite_testPreIncrement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testPreIncrement() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 27, "testPreIncrement" ) {}
 void runTest() { suite_calcTestSuite.testPreIncrement(); }
} testDescription_suite_calcTestSuite_testPreIncrement;

static class TestDescription_suite_calcTestSuite_testPostIncrement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testPostIncrement() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 36, "testPostIncrement" ) {}
 void runTest() { suite_calcTestSuite.testPostIncrement(); }
} testDescription_suite_calcTestSuite_testPostIncrement;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
