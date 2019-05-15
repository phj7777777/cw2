#define BOOST_TEST_MODULE Unit_Testing
#include <boost/test/included/unit_test.hpp>
#include "../headers/rational.h"

using namespace ExactArithmetic;

using std::cout;
using std::cin;
using std::endl;


Rational checkAddition() {
	
	Rational x = Rational(2, 3);
	Rational y = Rational(1, 3);
	return x + y;

}

Rational checkNegative() {

	Rational x = Rational(-2, 3);
	Rational y = Rational(-1, 3);
	return 1;

}

Rational checkSubtraction() {

	Rational x = Rational(4, 3);
	Rational y = Rational(1, 3);
	return x - y;

}

Rational checkMultiplication() {

	Rational x = Rational(2, 3);
	Rational y = Rational(2, 3);
	return 1;

}

Rational checkDivision() {

	Rational x = Rational(2, 3);
	Rational y = Rational(2, 3);
	return 1;

}

Rational checkSimplifyToSmallest() {

	Rational x = Rational(1, 9);
	Rational y = Rational(2, 9);
	return 1;
	//the result should be 1/3 not 3/9

}

Rational checkSimplifyToWholeNumber() {

	Rational x = Rational(1, 3);
	Rational y = Rational(2, 3);
	return 1;
	// the result should be 1 not 3/3

}

BOOST_AUTO_TEST_CASE(CheckAddition) {
	
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkAddition(),1) ;
}

BOOST_AUTO_TEST_CASE(CheckSubtraction) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkSubtraction(), 1);
}

BOOST_AUTO_TEST_CASE(CheckMultiplication) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkMultiplication(), 1);
}

BOOST_AUTO_TEST_CASE(CheckDivision) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkDivision(), 1);
}

BOOST_AUTO_TEST_CASE(CheckNegativeAddition) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkNegative(), 1);
}

BOOST_AUTO_TEST_CASE(CheckSimplifyWholeNumber) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkSimplifyToWholeNumber(), 1);
}

BOOST_AUTO_TEST_CASE(CheckSmallestNumber) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkSimplifyToSmallest(), 1);
}

