#ifndef IK_H
#define IK_H

#include "fk.h"
#include <eigen3/Eigen/Eigen>

using namespace std;

typedef Eigen::Matrix<double, 5, 5> Matrix5d;
typedef Eigen::Vector<double, 5> Vector5d;

namespace IK {
/**
 * @brief Jacobian matrix for wx200 arm.
 * @param thetas [theta1, theta2, theta4, theta5, theta6]
 * @return Resulting jacobian matrix.
 */
Matrix5d generate_jacobian(vector<double> thetas);
vector<double> get_next_thetas(vector<double> current_thetas,
                               vector<double> goal_thetas, FK fk);
}; // namespace IK

#endif