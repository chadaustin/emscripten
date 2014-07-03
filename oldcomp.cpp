#include <gmtl/MatrixOps.h>

using namespace gmtl;

extern "C" void matrixMultiply(Matrix44f& out, Matrix44f& lhs, Matrix44f& rhs) {
    mult(out, lhs, rhs);
}

int main() {
}
