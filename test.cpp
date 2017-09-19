#include <iostream>
#include <string>
#include <gtest\gtest.h>
#include "Ch1Q3.h"
#include "Ch1Q4.h"
#include "Ch1Q5.h"
#include "sorting.h"

using namespace std;

SolutionToCh1Q3 solToCh1Q3;

TEST(first_test_ch1q3, Ch1Q3) {
	EXPECT_EQ(solToCh1Q3.getModifiedString("Mr John Smith         ", 13), "Mr%20John%20Smith");
}

SolutionToCh1Q4 solToCh1Q4;

TEST(first_test_ch1q4, Ch1Q4) {
	EXPECT_EQ(solToCh1Q4.isPalindromePermutation("Tact Coa"), true);
}

SolutionToCh1Q5 solToCh1Q5;

TEST(first_test_ch1q5, Ch1Q5) {
	EXPECT_EQ(solToCh1Q5.areStringsOneEditAway("pale", "ple"), true);
}

TEST(second_test_ch1q5, Ch1Q5) {
	EXPECT_EQ(solToCh1Q5.areStringsOneEditAway("pales", "pale"), true);
}

TEST(third_test_ch1q5, Ch1Q5) {
	EXPECT_EQ(solToCh1Q5.areStringsOneEditAway("pale", "bale"), true);
}

TEST(fourth_test_ch1q5, Ch1Q5) {
	EXPECT_EQ(solToCh1Q5.areStringsOneEditAway("pale", "bake"), false);
}

Sorting <int> IntSorting;

TEST(int_test, Sorting) {
	vector <int> input_vector = { 5, 3, 1, 4, 2 };
	vector <int> result_vector = { 1 , 2, 3, 4, 5 };
	EXPECT_EQ(IntSorting.merge_sort(input_vector), result_vector);
}

Sorting <double> FloatSorting;

TEST(float_test, Sorting) {
	vector <double> input_vector = { 5.25, 3.61, 1.25, 4.369, 2.0005 };
	vector <double> result_vector = { 1.25 , 2.0005, 3.61, 4.369, 5.25 };
	EXPECT_EQ(FloatSorting.merge_sort(input_vector), result_vector);
}

//Sorting <int> IntSorting;
//
//TEST(Sorting, int_test) {
//	vector <int> input_vector = { 5, 3, 1, 4, 2 };
//	vector <int> result_vector = { 1 , 2, 3, 4, 5 };
//	IntSorting.quick_sort(input_vector, 0, input_vector.size());
//	EXPECT_EQ(input_vector, result_vector);
//}
//
//Sorting <double> FloatSorting;
//
//TEST(Sorting, float_test) {
//	vector <double> input_vector = { 5.25, 3.61, 1.25, 4.369, 2.0005 };
//	vector <double> result_vector = { 1.25 , 2.0005, 3.61, 4.369, 5.25 };
//	FloatSorting.quick_sort(input_vector, 0, input_vector.size());
//	EXPECT_EQ(input_vector, result_vector);
//}



