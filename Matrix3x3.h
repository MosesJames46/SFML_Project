#pragma once

#include <vector>

class Matrix3x3 {
public:
    Matrix3x3(std::vector<std::vector<float>> elements);

    std::vector<float> multiplyVector(const std::vector<float>& vector) const;
    Matrix3x3 multiplyMatrix(const Matrix3x3& other) const;
    float& operator()(int i, int j);
    const float& operator()(int i, int j) const;
    // Add getters or other methods if needed

private:
    std::vector<std::vector<float>> elements_;
};