#ifndef MatrixMultiplication

#define MatrixMultiplication

#include <vector>

using matrix = std::vector < std::vector <int> >;

matrix get_unit_matrix(int matrix_size) {
	matrix result = std::vector < std::vector <int> >(matrix_size, std::vector <int>(matrix_size, 0));
	for (int i = 0; i < matrix_size; ++i) {
		result[i][i] = 1;
	}
	return result;
}

matrix simple_matrix_multiplication(const matrix &firstMatrix, const matrix &secondMatrix) {
	int rows = firstMatrix.size();
	int columns = secondMatrix[0].size();
	matrix result = std::vector < std::vector <int> >(rows, std::vector <int>(columns, 0));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			for (int k = 0; k < firstMatrix[0].size(); ++k) {
				result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
	return result;
}

matrix matrix_multiplication(const matrix &inputMatrix, int power) {
	matrix result, to_multiply;
	result = get_unit_matrix(inputMatrix.size());
	to_multiply = inputMatrix;
	while (power != 1) {
		if (power % 2 == 1) {
			result = simple_matrix_multiplication(result, to_multiply);
		}
		else {
			to_multiply = simple_matrix_multiplication(to_multiply, to_multiply);
		}
		power /= 2;
	}
}

#endif