// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int temp[n];

//   for (int i = 0; i < n; i++) {
//     int tmp;
//     cin >> tmp;
//     temp[i] = tmp;
//   }

//   int max = 0;
//   int total = 0;

//   for (int i = 0; i < n; i++) {
//     if (temp[i] >= max) {
//       max = temp[i];
//     }

//     total = total + temp[i];
//   }

//   float result = ((float)total / n) / (float)max * 100.0;
//   cout << result;

//   return 0;
// }