// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//   int n, m;
//   cin >> n >> m;

//   int arr[n];
//   //초기화
//   for (int i = 0; i < n; i++) {
//     arr[i] = i + 1;
//   }

//   for (int i = 0; i < m; i++) {
//     int start, end;

//     cin >> start >> end;

//     int count = end - start;

//     for (int j = 0; j <= count / 2; j++) {
//       int temp = arr[start + j - 1];
//       arr[start + j - 1] = arr[end - j - 1];
//       arr[end - j - 1] = temp;
//     }
//   }

//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }