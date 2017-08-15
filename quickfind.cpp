#include <stdio.h>
#include <iostream>
class QuickFindUF {
  public: int id[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  bool connected(int p, int q) {
    return id[p] == id[q];
  }


  public: void UF_union(int p, int q) {
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < sizeof(id); i++) {
      if (id[i] == pid) {
        id[i] = qid;
      }
    }
  }

  public: void print() {
    for (int i = 0 ; i < sizeof(id) / sizeof(id[0]); i++) {
      std::cout << id[i];
    }
  }
};

int main() {
  QuickFindUF qf;
  qf.UF_union(3, 8);
  qf.print();
  return 0;
}

