#include "Matrix3x3.h"

Matrix3x3::Matrix3x3(std::vector<std::vector<float>> elements) : elements_(elements) {}

std::vector<float> Matrix3x3::multiplyVector(const std::vector<float>& vector) const {
    std::vector<float> result(3, 0.0f);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i] += elements_[i][j] * vector[j];
        }
    }

    return result;
}

Matrix3x3 Matrix3x3::multiplyMatrix(const Matrix3x3& other) const {
    std::vector<std::vector<float>> resultElements(3, std::vector<float>(3, 0.0f));

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                resultElements[i][j] += elements_[i][k] * other.elements_[k][j];
            }
        }
    }

    return Matrix3x3(resultElements);
}

float& Matrix3x3::operator()(int i, int j) {
    return elements_[i][j];
}

const float& Matrix3x3::operator()(int i, int j) const {
    return elements_[i][j];
}