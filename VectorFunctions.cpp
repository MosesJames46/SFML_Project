#include "VectorFunctions.h"






std::vector<double> VectorFunctions::matrixMultiply(std::vector<std::vector<double>> mat, std::vector<double>vec) {
    // Check if the matrix and vector have the correct dimensions
    if (mat.size() != 4 || mat[0].size() != 4 || vec.size() != 4) {
        std::cerr << "Error: Incompatible matrix and vector dimensions for multiplication." << std::endl;
        return std::vector<double> {0, 0, 0, 0}; // Return an empty vector
    }

    // Initialize the result vector with zeros
    std::vector<double> result(4, 0.0);

    // Perform matrix multiplication
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            result[i] += mat[i][j] * vec[j];
        }
    }

	return result;
}

void VectorFunctions::readMat(std::vector<double> mat1) {
	for (const auto& value : mat1) {
		std::cout << value << " ,";

		std::cout << "\n";
	}
}

//Takes two points and gets their distance
//float VectorFunctions::distance2D(std::vector<double> point1, std::vector<double> point2) {
//	return static_cast<double>(std::sqrt(std::pow((point2[0] - point1[0]), 2) + std::pow((point2[1] - point1[1]), 2)));
//}