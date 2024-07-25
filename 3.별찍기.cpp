// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   string temp = "";

//   for (int j = 0; j < n * 2 - 1; j++) {
//     temp = temp + " ";
//   }

//   for (int i = 0; i < n; i++) {

//     temp[n - 1] = '*';
//     temp[n - 1 - i] = '*';
//     temp[n - 1 + i] = '*';
//     cout << temp << endl;
//   }

//   for (int i = n - 1; i >= 0; i--) {

//     temp[n - i - 1] = ' ';
//     temp[n + i - 1] = ' ';
//     cout << temp << endl;
//   }
//   return 0;
// }

///////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   int N = 0;
//   cin >> N;

//   for (int i = 1; i <= N; i++) {
//     for (int j = N - i; j > 0; j--) {
//       cout << " ";
//     }
//     for (int j = 2 * i - 1; j > 0; j--) {
//       cout << "*";
//     }
//     cout << endl;
//   }

//   for (int i = 1; i < N; i++) {
//     for (int j = 0; j < i; j++) {
//       cout << " ";
//     }
//     for (int j = 2 * (N - i) - 1; j > 0; j--) {
//       cout << "*";
//     }
//     cout << endl;
//   }

//   return 0;
// }
