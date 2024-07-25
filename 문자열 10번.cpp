// #include <iostream>
// #include <map>
// #include <string>

// // 65~90 : 대문자

// using namespace std;

// int main() {

//   string tmp;
//   cin >> tmp;

//   int count = 0;

//   for (int i = 0; i < tmp.length(); i++) {
//     int temp = tmp[i] - 'A';

//     if (temp <= 2) // 2
//       count = count + 3;
//     else if (temp > 2 && temp <= 5) // 3
//       count = count + 4;
//     else if (temp > 5 && temp <= 8) // 4
//       count = count + 5;
//     else if (temp > 8 && temp <= 11) // 5
//       count = count + 6;
//     else if (temp > 11 && temp <= 14) // 6
//       count = count + 7;
//     else if (temp > 14 && temp <= 18) // 7
//       count = count + 8;
//     else if (temp > 18 && temp <= 21) // 8
//       count = count + 9;
//     else if (temp > 21 && temp <= 25) // 9
//       count = count + 10;
//     else
//       count = count + 11;
//   }
//   cout << count;
//   return 0;
// }