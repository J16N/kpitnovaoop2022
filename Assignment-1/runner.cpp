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
bool suite_complexTestSuite_init = false;
#include "test.h"

static complexTestSuite suite_complexTestSuite;

static CxxTest::List Tests_complexTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_complexTestSuite( "test.h", 4, "complexTestSuite", suite_complexTestSuite, Tests_complexTestSuite );

static class TestDescription_suite_complexTestSuite_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_complexTestSuite_testAddition() : CxxTest::RealTestDescription( Tests_complexTestSuite, suiteDescription_complexTestSuite, 7, "testAddition" ) {}
 void runTest() { suite_complexTestSuite.testAddition(); }
} testDescription_suite_complexTestSuite_testAddition;

static class TestDescription_suite_complexTestSuite_testSubtraction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_complexTestSuite_testSubtraction() : CxxTest::RealTestDescription( Tests_complexTestSuite, suiteDescription_complexTestSuite, 17, "testSubtraction" ) {}
 void runTest() { suite_complexTestSuite.testSubtraction(); }
} testDescription_suite_complexTestSuite_testSubtraction;

static class TestDescription_suite_complexTestSuite_testPreIncrement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_complexTestSuite_testPreIncrement() : CxxTest::RealTestDescription( Tests_complexTestSuite, suiteDescription_complexTestSuite, 27, "testPreIncrement" ) {}
 void runTest() { suite_complexTestSuite.testPreIncrement(); }
} testDescription_suite_complexTestSuite_testPreIncrement;

static class TestDescription_suite_complexTestSuite_testPostIncrement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_complexTestSuite_testPostIncrement() : CxxTest::RealTestDescription( Tests_complexTestSuite, suiteDescription_complexTestSuite, 36, "testPostIncrement" ) {}
 void runTest() { suite_complexTestSuite.testPostIncrement(); }
} testDescription_suite_complexTestSuite_testPostIncrement;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
