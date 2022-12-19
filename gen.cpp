#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  for (int i = 1;  i <= 10; i++) {
    startTest(i);
    int n = rnd.next(int(1e6 * 9), int(1e7));
    printf("%d\n", n);
    for (int i = 1; i <= n; i++) printf("%d ", rnd.next(1, 100));
  }
}