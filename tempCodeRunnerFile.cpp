#include <iostream>
using namespace std;

int main() {
    int aku[5] = {10, 20, 30, 40, 50};
    int kamu[5];
    cout << "Data pada index 1 = " << aku[1] << endl;
    aku[1] = 200;
    cout << endl;
    cout << "Data pada index 1 = " << aku[1] << endl;
    cout << "Data index 0 = ";
    cin >> kamu[0];
    cout << "Data index 1 = ";
    cin >> kamu[1];
    cout << "Data index 2 = ";
    cin >> kamu[2];
    cout << "Data index 3 = ";
    cin >> kamu[3];
    cout << "Data index 4 = ";
    cin >> kamu[4];
    cout << endl;

    cout << "Data pada index 0 = " << kamu[0] << endl;
    cout << "Data pada index 1 = " << kamu[1] << endl;
    cout << "Data pada index 2 = " << kamu[2] << endl;
    cout << "Data pada index 3 = " << kamu[3] << endl;
    cout << "Data pada index 4 = " << kamu[4] << endl;
    cout << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << "Data ke-" << i+1 << " = " << kamu[i] << endl;
        cin >> kamu[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++) 
    {
        cout << "Data ke-" << i+1 << " = " << kamu[i] << endl;
    }

return 0;
}