#include "testlib.h"
using namespace std;

const double eps = 1e-6;
int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);

  double f_user = ouf.readDouble();
  double f_ans = ans.readDouble();

  if (fabs(f_ans - f_user) <= eps) quitf(_ok, "Accept!");
  else quitf(_wa, "Wrong Answer!");
}