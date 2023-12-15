#include <iostream>
#include <cmath>
using namespace std ;

int main()
{

     /*
     - Cú pháp

     for (init-statement; conditional-statement; end-expression)
     {
          # statement or block of code
     }

     // In ra các số từ 1 đến 10
     for(int i = 1 ; i <= 10 ; i++)
     {
          cout << i << " " ;
     }

     // Tính tổng các số tự nhiên từ 1 đến 10
     int n ; cin >> n ;
     long long sum = 0 ;
     for(int i = 1 ; i <= n ; i++)
     {
          sum += i ;
     }
     cout << sum << endl ;

     // Tính tổng S = 2 + 4 + 6 + ... + 2*n

     int n ; cin >> n ;
     long long sum = 0 ;
     for(int i = 1 ; i <= n ; i++)
     {
          sum += i ;
     }
     cout << 2 * sum << endl ;

     // Tính T = 1.2.3 .... .n
     int n ; cin >> n ;
     long long res = 1 ;
     for(int i = 1 ; i <= n ; i++)
     {
          res *= i ;
     }
     cout << res << endl ;

     - break : Khi gặp câu lệnh break , vòng lặp sẽ dừng lại ngay lập tức
     for(int i = 1 ; i <= 10 ; i++)
     {
          if(i == 5)
               break ;
          cout << i << " " ;
     }
     - Output : 1 2 3 4

     - continue : Khi gặp câu lệnh continue , vòng lặp sẽ bỏ qua các câu lệnh đằng sau continue
                  và thực hiện vòng lặp mới

     for(int i = 1 ; i <= 10 ; i++)
     {
          if(i == 5)
               continue ;
          cout << i << " " ;
     }
     - Output : 1 2 3 4 6 7 8 9 10

     */

     /*
     - Cú pháp
     while (conditional)
     {
          # statement or block of code

     }

     int i = 0;
     while (i <= 9)
     {
          cout << "Hello world" << endl;
          i++;
     }

     - Các dạng bài tập liên quan đến vòng lặp while

     +) Đếm số chữ số của 1 số nguyên dương n

     int n ; cin >> n ;
     int count = 0 ;
     while(n != 0)
     {
          count++ ;
          n /= 10 ;
     }
     cout << count << endl ;

     +) Tính tổng các chữ số của 1 số nguyên dương n

     int n ; cin >> n ;
     int sum = 0 ;
     while(n != 0)
     {
          int r = n % 10 ;
          sum += r ;
          n /= 10 // Loại bỏ chữ số cuối cùng
     }
     cout << sum << endl ;

     +) Đếm số chữ số của số nguyên dương n thỏa mãn một tính chất nào đó
     - Đếm số chữ số của số nguyên dương n thỏa mãn là chữ số chẵn

     int n ; cin >> n ;
     int count = 0 ;
     while(n != 0)
     {
          int r = n % 10 ;
          if(r % 2 == 0)
               count++ ;
          n /= 10 ;
     }
     cout << count << endl ;
     - Đếm số chữ số của số nguyên dương n thỏa mãn là chữ số nguyên tố
     int n ; cin >> n ;
     int count = 0 ;
     while(n != 0)
     {
          int r = n % 10 ;
          if(r == 2 || r == 3 || r == 5 || r == 7)
               count++ ;
          n /= 10 ;
     }
     cout << count << endl ;
     */

     /*
     - Cú pháp
          do {
               # code
          } while(conditional);
     - Lưu ý : Phải có dấu chấm phẩy sau while
     - Vòng lặp do - while sẽ thực hiện trước 1 lần sau đó mới kiểm tra điều kiện lặp

     int i = 5 ;
     do {
          cout << i << " " ;
     }while(i <= 4);

     Output : 5

     int i = 1 ;
     do {
          cout << i << " " ;
          i++ ;
     }while(i <= 10) ;

     */
     return 0 ;
}
