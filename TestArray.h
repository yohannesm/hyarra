// ------------------------------
// projects/c++/array/TestArray.h
// Copyright (C) 2009
// Glenn P. Downing
// ------------------------------

#ifndef TestArray_h
#define TestArray_h

// --------
// includes
// --------

#include <algorithm> // equal
#include <stdexcept> // out_of_range

#include "cppunit/TestFixture.h"             // TestFixture
#include "cppunit/extensions/HelperMacros.h" // CPPUNIT_TEST, CPPUNIT_TEST_SUITE, CPPUNIT_TEST_SUITE

#include "Array.h"

// ---------
// TestArray
// ---------

struct TestArray : CppUnit::TestFixture {
    // -----
    // tests
    // -----
     
    // -----
    // tests constructor
    // -----
    void test_constructor0(){
    My::Array<int, 10> x(2);
    x.print();
    }
    // -----
    // suite
    // -----

    CPPUNIT_TEST_SUITE(TestArray);
    CPPUNIT_TEST(test_constructor0);
    CPPUNIT_TEST_SUITE_END();};

#endif // TestArray_h
 
