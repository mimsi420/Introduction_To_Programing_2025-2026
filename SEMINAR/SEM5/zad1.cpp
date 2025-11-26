//** Задача 1:**Напишете функция, която приема матрица MxN и транспонира матрицата.

//#include <iostream>
//using namespace std;
//
//const int MAX = 100;
//
//// нищо не схванах от тука so...
//void transpose(const int A[][MAX], int B[][MAX], int M, int N)
//{
//    for (int i = 0; i < M; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            B[j][i] = A[i][j];
//        }
//    }
//}
//
//int main()
//{
//    int M, N;
//    cin >> M >> N;
//
//    int A[MAX][MAX];
//    int B[MAX][MAX];
//
//    for (int i = 0; i < M; ++i)
//    {
//        for (int j = 0; j < N; ++j )
//        {
//            cin >> A[i][j];
//        }
//    }
//
//    transpose(A, B, M, N);
//
//    for (int i = 0; i < N; ++i)
//    {
//        for (int j = 0; j < M; ++j)
//        {
//            cout << B[i][j] << " ";
//        }
//        cout << "\n";
//    }
//}
