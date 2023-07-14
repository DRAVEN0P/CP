#include <iostream>
using namespace std;

class AG {
    int n;
    int* seq;

public:
    // AG() : n(0), seq(nullptr) {}
    // ~AG() { delete[] seq; }
    void setdata(void);
    void chk_seq(void);
};

void AG::setdata(void) {
    cout << "Enter The No of Entries: ";
    cin >> n;
    seq = new int[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".";
        cin >> seq[i];
    }
    cout<<seq<<endl;
}

void AG::chk_seq(void) {
    bool Ap = true, Gp = true;
    int cd = seq[1] - seq[0];
    int cr = seq[1] / seq[0];
    for (int i = 0; i < n - 1; i++) {
        if (seq[i + 1] != seq[i] + cd) {
            Ap = false;
        }
        if (seq[i + 1] != seq[i] * cr) {
            Gp = false;
        }
    }
    if (Ap) {
        cout << "Arithmetic sequence";
    } else if (Gp) {
        cout << "Geometric sequence";
    } else {
        cout << "Neither arithmetic nor geometric sequence";
    }
}

int main() {
    AG a;
    a.setdata();
    a.chk_seq();
    return 0;
}
